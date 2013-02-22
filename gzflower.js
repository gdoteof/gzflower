(function ($) {
  Drupal.behaviors.gzflower = {
    attach: function (context, settings){
      console.log(settings);
      "use strict"
      // Global configuration

      var config = {
          canvas: {width: 300, height: 300},
          scale: 9.0,
          numPetals: 12,
          r1: 1,
          r2: 16,
          r3: 30,
          da1: 0.5,
          da2: 0.5,
      };

      function xy(r, a) {
          var x = r * Math.cos(a);
          var y = r * Math.sin(a);
          return x.toFixed(2) + "," + y.toFixed(2);
      }

      // Compute an SVG path
      function petalPath(r1, r2, r3, a1, a2) {
          var r = r3*0.7;
          return ["M", xy(r1, a1),
                  "A", r, r, 0, 0, 0, xy(r2, a1),
                  "A", r, r, 0, 0, 0, xy(r1, a1),
                  "Z"].join(" ");
      }

      var svg = d3.select("#gzflower-canvas")
          .append("svg:svg")
          .attr("id", "svg-root")
          .attr("width", config.canvas.width)
          .attr("height", config.canvas.height)
          .append("svg:g")
          .attr("transform", "translate(" + (0.5 + config.canvas.width/2) + "," + (0.5 + config.canvas.height/2) + ") scale(" + config.scale + ")");
          build();

      function build() {
          var petals = svg.selectAll(".petal")
              .data(d3.range(config.numPetals));
          petals.exit().remove();
          petals.enter().append("svg:path")
              .attr("class", "petal");
          petals
              .attr("d", function(d, i) { return petalPath(config.r1, config.r2, config.r3, i/config.numPetals*Math.PI*2, (i+1)/config.numPetals*Math.PI*2); })
            .transition()
              .attr("fill", function(d, i) { return color(d) });
      }

      function color(petal){
        if((petal + 1) in settings.gzflower.flower_data){
          return settings.gzflower.flower_data[petal+1].color;
        }
        else{
          return "#d1d1d2";
        }
      }

      build();
    }
  }
})(jQuery);
