<?php

function gzflower_exercise_results($answers){
  $sum = 0;
  $vals = array('A'=>1, 'B'=>2, 'C' => 3);
  foreach($answers as $answer){
    $sum += $vals[$answer]; 
  }
  if($sum <= 9){
    $color = "#e98890";
    $description = "Self-Motivators: You like structure and organization but may find yourself losing interest in your usual activities. Try adding something new to your routine.";
  }
  elseif($sum <= 14){
    $color = "#e05863";
    $description = "Team Players: To you, exercise is a way to socialize. Try signing up for an exercise class, forming a walking group, or joining a sports team or club.";

  }
  else{
    $color = "#8c373e";
    $description = "Spontaneous Types: You love freedom. A call from a friend to take a hike or a walk to the store for an unexpected item may be what motivates you to be active. These activities are good, but be sure to include a variety of moderate intensity activities on 5 or more days of the week.";

  }
  return array($color, $description);
/*
To find your score, give yourself points as follows:

a = 1 point;
b = 2 points;
c = 3 points

If you scored:

(HEX #e98890) 6-9 points - Self-Motivators: You like structure and organization but may find yourself losing interest in your usual activities. Try adding something new to your routine.

(HEX #e05863)10 - 14 points -Team Players: To you, exercise is a way to socialize. Try signing up for an exercise class, forming a walking group, or joining a sports team or club.

(HEX #8c373e) 15-18 points Spontaneous Types: You love freedom. A call from a friend to take a hike or a walk to the store for an unexpected item may be what motivates you to be active. These activities are good, but be sure to include a variety of moderate intensity activities on 5 or more days of the week.
*/
}



function _gzflower_get_result_data(){
  $results[0] = array(
    'type' => 'sum',
    'callback' => 'gzflower_exercise_results',
  );


  $results[1] = array(
    'type' => 'most',
    'results'=> array(
      'A' => array(
        'text' => "You’re an adventurous and healthy foodie. Good food is important to you.  From your perspective, meals are to be enjoyed. You like to cook and are up for the challenge of making healthy food delicious.",
        'color' => "#f3bcd9",
      ),
      'B' => array(
        'text' => "You’re a good cook and are open to learning. You like to cook and eat good, healthy food but it is not the most important thing. You prefer to save time instead of spending time in the kitchen.",
        'color' => "#e988c0",
      ),
      'C' => array(
        'text' => "You’re a cook with potential; you’re interested in cooking but have other things to do. Cooking needs to quick and easy.",
        'color' => "#e058a7",
      ),
      'D' => array(
        'text' => "Make mine in the Microwave! You prefer others to do the cooking and are not fussy about taste, health or food quality.",
        'color' => "#8c3768",
      ),
    ),
  );




  $results[2] = array(
    'type' => 'most',
    'results'=> array(
      'A' => array(
        'text' => "Jennifer Lawrence</br> Sometimes you worry about being too in other people’s face, but at the end of the day you know who you are and what you want, and people love you for it. You’ll be the first to admit that you don’t have much of a filter, and tend to just say whatever comes to mind. You have an awesome sense of humor and are pretty much up for anything at any point. You work hard, but never take yourself too seriously.",
        'color' => "#f3bcea",
      ),
      'B' => array(
        'text' => "Taylor Swift</br> You are America’s sweetheart. You’re kind and sweet and everyone loves you. You love being around people and do your best to meet as many people as possible.  You believe in building people up and staying positive. You’ve had your struggles, but you always remember your roots. Your family and your friends are the most important aspect of your life.",
        'color' => "#e988e0",
      ),
      'C' => array(
        'text' => "Kristen Stewart</br> You have a darker, more mysterious persona. People are constantly telling you that you’re hard to read, and everyone wants to figure you out. You’re interested in authors like John Steinbeck and Albert Camus. You spend any spare time writing and listening to music. If you weren’t an actress, you’d want to be involved in screen writing or at the very least, something artistic.",
        'color' => "#e058d3",
      ),
      'D' => array(
        'text' => "Selena Gomez</br> You have the girl -next -door vibe and everyone loves you! You are sweet and kind and everyone looks up to you. You like to see all sides of an issue and try to emphasize similarities, instead of differences. You have a very peaceful spirit and tend to enjoy just going with the flow. People are drawn to you, because of your love of life and positive energy. You realize that life is short and believe in spending as much time as possible with the people that you love most.",
        'color' => "#8c3784",
      ),
    ),
  );




  $results[3] = array(
    'type' => 'most',
    'results'=> array(
      'A' => array(
        'text' => "You are Spring! You’re an optimist and an early riser. You are always excited for what the day has in store for you. People are drawn to your positive energy. You love nature and anything that allows you to be active and thoughtful at the same time.  ",
        'color' => "#ebbbf4",
      ),
      'B' => array(
        'text' => "You are Winter! You are more driven by your emotions. You love getting lost in your thoughts. Your ideal afternoon would be one spent indoors curled up by a fire with your favorite books and movies. You’re more of a homebody, and everyone loves you for your warm spirit!  ",
        'color' => "#d686eb",
      ),
      'C' => array(
        'text' => "You are Summer! You are always up for an adventure. You have a lot of energy and people often tell you that you’re restless. You love being active and are extremely social. Your ideal day would be one spent at the beach, riding your bike, or enjoying a bonfire with your friends!  ",
        'color' => "#c656e3",
      ),
      'D' => array(
        'text' => "You are Fall! You crave fresh starts and new beginnings. You are a mix between Summer and Winter, so you have the unique balance of introversion and extraversion. You love adventure and hanging out with friends, but sometimes you just need your alone time to focus on you!  ",
        'color' => "#7b368e",
      ),
    ),
  );




  $results[4] = array(
    'type' => 'most',
    'results'=> array(
      'A' => array(
        'text' => "You’re a Hip Hop/Rap girl!",
        'color' => "#d5bbf7",
      ),
      'B' => array(
        'text' => "You’re a Pop girl!",
        'color' => "#ae86f1",
      ),
      'C' => array(
        'text' => "You’re a Rock girl!",
        'color' => "#8e56ec",
      ),
      'D' => array(
        'text' => "You’re a Folk girl!",
        'color' => "#593693",
      ),
    ),
  );



  $results[5] = array(
    'type' => 'most',
    'results'=> array(
      'A' => array(
        'text' => "You have an excellent attitude and love getting to know all people.  You're a nurturer by nature and are interested in learning as much about people as possible. You understand boundaries and recognize that everyone has different needs and desires. Just knowing that you are making a difference is enough for you!  ",
        'color' => "#c1bbf9",
      ),
      'B' => array(
        'text' => "You're very shy and prefer one- on- one interactions, as opposed to group work. This attitude is great for smaller non-profits that need help in their offices. Perhaps volunteering at an animal shelter would be perfect for you!",
        'color' => "#8c86f4",
      ),
      'C' => array(
        'text' => "You are extremely flexible and open. You are a natural leader, but know when to sit back and go with the flow, which is a unique, but admirable quality. You're very accommodating and always want everyone to feel valued and important. You’ll thrive working with large groups of people!",
        'color' => "#5d56ef",
      ),
      'D' => array(
        'text' => "You’re focused and very intense. Gravitate towards organizations that know what they’re looking for. If you focus on your specific talents, you’ll find an opportunity that makes the most of your skills.",
        'color' => "#3a3695",
      ),
    ),
  );




  $results[6] = array(
    'type' => 'most',
    'results'=> array(
      'A' => array(
        'text' => "Sporty! You are strong both mentally and physically. You know what you want and believe in pushing yourself to the limits to get there. Your style",
        'color' => "#bcc1f8",
      ),
      'B' => array(
        'text' => "Classy! You prefer dark colors. You have a more mysterious way about you, which draws people to you. You know exactly what you want and aren’t afraid to work hard to get it.",
        'color' => "#8896f2",
      ),
      'C' => array(
        'text' => "New York Hipster! Your wardrobe consists of black and neutral tones.  You feel most comfortable in leggings, sweaters, and boots. You belong in cities like New York or San Francisco.",
        'color' => "#586ced",
      ),
      'D' => array(
        'text' => "Prep! You like muted colors. You belong in places like Southern California where the weather is as sunny as your disposition. You are always put together and ready for anything.  ",
        'color' => "#374394",
      ),
    ),
  );




  $results[7] = array(
    'type' => 'most',
    'results'=> array(
      'A' => array(
        'text' => "You’re a Rom-Com Girl! Bring on the fun and romance.",
        'color' => "#bcd0f5",
      ),
      'B' => array(
        'text' => "Your favorite type of films are Dramas, with lots of heightened emotions.",
        'color' => "#88b0ee",
      ),
      'C' => array(
        'text' => "You love Action/Adventure films - You want to see explosions, and you want to see them NOW!",
        'color' => "#5891e7",
      ),
      'D' => array(
        'text' => "Thriller/Horror –You need the excitement of a thriller to get you excited about movies-make someone else see the lovey-dovey films.",
        'color' => "#375a90",
      ),
    ),
  );


  $results[8] = array(
    'type' => 'most',
    'results'=> array(
      'A' => array(
        'text' => "You’re an Earth girl!",
        'color' => "#bcddf3",
      ),
      'B' => array(
        'text' => "You’re a Water girl!",
        'color' => "#88c7ea",
      ),
      'C' => array(
        'text' => "You’re an Air girl!",
        'color' => "#58b1e1",
      ),
      'D' => array(
        'text' => "You’re a Fire girl!",
        'color' => "#376e8c",
      ),
    ),
  );




  $results[9] = array(
    'type' => 'most',
    'results'=> array(
      'A' => array(
        'text' => "You are an Extrovert, you love to be around your friends and that’s necessary for your happiness.",
        'color' => "#bae7f1",
      ),
      'B' => array(
        'text' => "You are primarily an Extrovert with some Introvert qualities.",
        'color' => "#84d8e5",
      ),
      'C' => array(
        'text' => "You are primarily an Introvert with some Extrovert qualities.",
        'color' => "#52cadb",
      ),
      'D' => array(
        'text' => "You are an Introvert- you like to keep to yourself.",
        'color' => "#337e89",
      ),
    ),
  );




  $results[10] = array(
    'type' => 'most',
    'results'=> array(
      'A' => array(
        'text' => "You are a wonderful and caring friend, and also very reliable in other aspects of your life. Keep up the good work!",
        'color' => "#b6f2f2",
      ),
      'B' => array(
        'text' => "You are great friend to those already close to you—you’ll do whatever necessary to protect your loved ones.",
        'color' => "#7de8e2",
      ),
      'C' => array(
        'text' => "You are a loyal friend to those who are loyal to you, but you often find it difficult to make time for your friends.",
        'color' => "#49dfd6",
      ),
      'D' => array(
        'text' => "You do your best to be a good friend, but you struggle with showing your friends your softer side.",
        'color' => "#2e8b85",
      ),
    ),
  );


  $results[11] = array(
    'type' => 'most',
    'results'=> array(
      'A' => array(
        'text' => "You are a book girl.",
        'color' => "#b3f6e8",
      ),
      'B' => array(
        'text' => "You are a music girl.",
        'color' => "#78efd2",
      ),
      'C' => array(
        'text' => "You are a movie girl.",
        'color' => "#42e9bf",
      ),
      'D' => array(
        'text' => "You are a theater girl",
        'color' => "#299177",
      ),
    ),
  );
  return $results;
}
