<?php
  /*
    Preproccesed variables;
      $flower_data : an array of associative arrays containing results for this user.
      $quiz_data     : an array of associative arrays containing the quiz descriptions and links to quizzes for this user
      $account     : the User object for the results page being viewed
      $user        : the user object for the session.

    div#gzflower-canvas is the canvas upon which we write the flower.  
  */
?>
<div id="gzflower-canvas"></div>
<div id="quiz-results-container">
  <span id="quiz-results-header">The quizzes you have taken so far as resulted in these identity aspects...</span>
  <?php
    $results = '';
    foreach($flower_data as $quiz_num => $quiz_result){
      if(isset($quiz_data[$quiz_num - 1])){
        $q = $quiz_data[$quiz_num -1];
        $r = $flower_data[$quiz_num];
        $results .= "<div class='quiz-result' id='quiz-result-$quiz_num'>";
        $results .= "<div class='quiz-title'>" . "#$quiz_num: ". $q['title'] . "</div>";
        $results .= "<div class='quiz-result'>" . $r['description'] . "</div>";
        $results .= "</div>";
      }
    }
    print $results;
  ?>

  <?php
    if($user->uid == $account->uid){
      //Only the user should be able to see their own quizzes
      $quizzes = '';
      foreach($quiz_data as $key => $quiz){
        $quizzes .= '<div class="quiz-description-container">';
        $quizzes .=  '<div class="quiz-title">'       . l($quiz['title'], 'user/'. $user->uid .'/flower/' . ($key +1)) . '</div>';
        $quizzes .=  '<div class="quiz-description">' . $quiz['description'] . '</div>';
        $quizzes .= '</div>';
      }
      print $quizzes;
    }
  ?>


</div>

