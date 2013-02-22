<?php

function _gzflower_get_quizzes(){
  $quiz[0] = array(
    "number" => 1,
    "title"  => "Fitness Personality.",
    "description" => "Take this quiz from the American Institute for Cancer Research to help you identify your \"fitness
  personality.\"",
    "questions" => array(
     0 => array(
        'question' => 'When thinking about exercise, I:',
        'answers' => array(
          'A' => "Can't wait to put on my walking shoes again.",
          'B' => "Really want to exercise but need a push.",
          'C' => " Dread the idea of moving a muscle, but am happy once I get moving.",
        ),
      ),
     1 => array(
        'question' => "When I'm physically active, I enjoy exercising:",
        'answers' => array(
          'A' =>  "By myself.",
          'B' =>  "With a team or group.",
          'C' =>  "With one or two friends.",
        )
      ),
     2 => array(
        'question' => "I exercise because:",
        'answers' => array(
          'A' =>  "I want to stay in shape, slim down, or improve my health.",
          'B' =>  "I want to see my friends and catch up on the latest news.",
          'C' =>  "The weather is nice or I just feel like it.",
        )
      ),
     3 => array(
        'question' => "When I take part in a physical activity, I usually:",
        'answers' => array(
          'A' =>  "Plan the event ahead of time.",
          'B' =>  "Participate when someone else has arranged the activity or class.",
          'C' =>  "Pull it together quickly and do something active when the mood strikes.",
        ),
      ),
     4 => array(
          'question' =>  "Others see me as:",
          'answers' => array(
          'A' => "A leader.",
          'B' => "A team player.",
          'C' => "Someone who always goes along with a good idea.",
          )
       ),
     5  => array(
          'question' => "I enjoy physical activities that are:",
          'answers' => array(
          'A' => "Set by my own routine.",
          'B' => "Set by a professional, teacher, or group.",
          'C' => "Spontaneous.",
          ),
      ),
    ),
  );


  $quiz[1] = array(
    "number" => 2,
    "title"  => "You and Food",
    "description" => "Answer the questions below to determine your food personality.",
    "questions" => array(
     0  => array(
            'question' => "Do you like to cook for yourself and/or friends?",
            'answers' => array(
              'A' => "Yes, I love it– I think cooking’s fun!",
              'B' => "It’s OK – I will bake cookies or cook something occasionally if I have time.",
              'C' => "Not really – I feel like cooking is a chore.",
              'D' => "No, I hate it – I like to eat food already prepared for me at home or a restaurant!",
          ),
     ),
     1  => array(
                'question' => "How would you describe your cooking skills and habits?",
                'answers' => array(
                  'A' => "I am a good cook and enjoy experimenting with new recipes.",
                  'B' => "I am an OK cook, but too many steps is a turnoff.",
                  'C' => "I only cook if the recipes are easy with few ingredients",
                  'D' => "I rarely cook, it’s too much work.",
                ),
              ),
     2  => array(
                'question' => "How would you describe your cooking?",
                'answers' => array(
                  'A' => "I like to use fresh ingredients",
                  'B' => "I use primarily fresh ingredients with some prepackaged",
                  'C' => "I like mixes that require little effort and are easy to follow.",
                  'D' => "I liked prepared foods or something microwaveable.",
                ),
              ),
     3  => array(
                'question' => "What types of foods do you like?",
                'answers' => array(
                  'A' => "I love to try all types of food, the weirder the better!",
                  'B' => "I try to have an open mind with trying new foods.",
                  'C' => "I will try some new things but mostly like to stick to what I know.",
                  'D' => "I have a very specific list of foods I like – at home, with friends or at restaurants.",
                ),
              ),
     4  => array(
                'question' => "How much do you know about the connection between food and health?",
                'answers' => array(
                  'A' => "I know what foods are healthy and unhealthy and generally try to eat nutritious foods.",
                  'B' => "I try to eat healthy but give myself plenty of room for occasional goodies.",
                  'C' => "I will eat what is good for me, along with a little fast food.",
                  'D' => "I don’t worry about calories, fat, or how the food affects my body – if I like it, I eat it!",
                ),
              ),
     5  => array(
                'question' => "How often does your family eat dinner together?",
                'answers' => array(
                  'A' => "My family eats together most nights.",
                  'B' => "We don’t always eat together but we do when we have time.",
                  'C' => "We always seem to eat on the run.",
                  'D' => "What’s the point eating together, anyway?",
                ),
              ),
      ),
  );


  $quiz[2] = array(
    "number" => 3,
    "title"  => "Which Celebrity Are You?",
    "description" => "",
    "questions" => array(
     0  => array(
                'question' => "An interviewer asks you a question regarding your feelings about your relationship being publicly documented in the media. How do you respond?",
                'answers' => array(
                  'a' => "You don’t want your relationship documented in the press, but you feel like the more you try and hide it, the more attention you’ll inadvertently draw.",
                  'b' => "You’re too busy writing songs about the last boy you went out with to worry about how you’re being portrayed in the media this week.",
                  'c' => "You wouldn’t want to “cheapen” your relationship by talking about it. Keep them guessing!",
                  'd' => "People can think whatever they want.",
                ),
              ),
     1  => array(
                'question' => "Your ideal outfit consists of:",
                'answers' => array(
                  'a' => "A dress that is both form fitting and classy.",
                  'b' => "A summer dress paired with your favorite boots.",
                  'c' => "Jeans and a funky t-shirt.",
                  'd' => "Anything simple, classic, and chic!",
                ),
              ),
     2  => array(
                'question' => "You get nervous in interviews and end up…",
                'answers' => array(
                  'a' => "Saying really ridiculous things.",
                  'b' => "Commenting on just how single you are and how much you love crime shows and cats.",
                  'c' => "Biting your nails and keeping your answers as short as possible. The shorter your answers, the sooner you can be done!",
                  'd' => "Nervous? No way! You’re confident and adorable. You enjoy just being yourself!",
                ),
              ),
     3  => array(
                'question' => "After a break-up, you…",
                'answers' => array(
                  'a' => "Do your best to move on. You play nice and keep things amicable. You want nothing, but the best for the people in your life.",
                  'b' => "Write a song about it.",
                  'c' => "Issue a public statement apologizing and professing your love.",
                  'd' => "Turn to your friends. They always know just what you need!",
                ),
              ),
     4  => array(
                'question' => "You’re bored on a Friday night. What do you do?",
                'answers' => array(
                  'a' => "Go to Wal-Mart with a friend and see which of you can find the most random items.",
                  'b' => "Bake cookies and watch Law & Order re-runs.",
                  'c' => "You’re a total homebody. You are in love with words and dedicate as much of your time as possible to reading and writing.",
                  'd' => "Your Friday nights are usually spent hanging out with friends. You’re pretty much up for anything, so long as the company is good!",
                ),
              ),
    ),
  );




  $quiz[3] = array(
    "number" => 4,
    "title"  => "What Season Are You?",
    "description" => "",
    "questions" => array(
     0  => array(
                'question' => "What time do you prefer to wake up every day?",
                'answers' => array(
                  'a' => "I’m a morning person! I’m up with the sun!",
                  'b' => "I prefer to sleep in as late as possible.",
                  'c' => "Mid-morning is ideal.",
                  'd' => "I sleep in as long as I can, before getting ready for school.",
                ),
            ),
     1  => array(
                'question' => "What are your favorite Colors?",
                'answers' => array(
                  'a' => "Soft yellows, pinks, purples, and greens.",
                  'b' => "Deep blues, grays, purples, and greens.",
                  'c' => "Bright pinks, oranges, yellows, and blues.",
                  'd' => "Rich golds, reds, and oranges.",
                ),
            ),
     2  => array(
                'question' => "Your favorite sound could be described as…",
                'answers' => array(
                  'a' => "Birds chirping",
                  'b' => "Snow falling from branches",
                  'c' => "Waves crashing",
                  'd' => "Leaves crunching",
                ),
            ),
     3  => array(
                'question' => "Your ideal day would consist of…",
                'answers' => array(
                  'a' => "A picnic with some of your best friends.",
                  'b' => "Curling up by a fire with a cup of hot chocolate and your favorite book.",
                  'c' => "A beach trip!",
                  'd' => "A night cheering on your high school’s football team.",
                ),
            ),
     4  => array(
                'question' => "What Kind of weather do you like best?",
                'answers' => array(
                  'a' => "Sunny and breezy!",
                  'b' => "I like the cold, but only if there’s snow!",
                  'c' => "Hot and sunny!",
                  'd' => "Mostly dry with occasional rain.",
                ),
            ),
     5  => array(
                'question' => "You like hanging out with friends…",
                'answers' => array(
                  'a' => "Almost always!",
                  'b' => "Sometimes, if it’s in smaller groups.",
                  'c' => "Always! The more people, the better!",
                  'd' => "Usually, but I’m perfectly content spending time alone, too.",
                ),
           ), 
    ),
  );









  $quiz[4] = array(
    "number" => 5,
    "title"  => "What type of music are you?",
    "description" => "",
    "questions" => array(
     0  => array(
                'question' => "How would you prefer to spend a Friday night?",
                'answers' => array(
                  'a' => "Out dancing with friends.",
                  'b' => "Having a sleepover.",
                  'c' => "Practicing with my band.",
                  'd' => "On a night hike.",
                ),
            ),
     1  => array(
                'question' => "Which of the following best describes you?",
                'answers' => array(
                  'a' => "Sassy",
                  'b' => "Enthusiastic",
                  'c' => "Passionate",
                  'd' => "Earthy",
                ),
            ),
     2  => array(
                'question' => "How would you describe your style?",
                'answers' => array(
                  'a' => "Urban",
                  'b' => "Trendy",
                  'c' => "Off-beat",
                  'd' => "Bohemian",
                ),
            ),
     3  => array(
                'question' => "Which of the following colors do you like best?",
                'answers' => array(
                  'a' => "Blue",
                  'b' => "Pink",
                  'c' => "Red",
                  'd' => "Green",
                ),
            ),
     4  => array(
                'question' => "What is your favorite of these animals?",
                'answers' => array(
                  'a' => "Crocodile",
                  'b' => "Flamingo",
                  'c' => "Rhino",
                  'd' => "Otter",
                ),
            ),
     5  => array(
                'question' => "What is your favorite website?",
                'answers' => array(
                  'a' => "YouTube",
                  'b' => "Celebrity gossips sites",
                  'c' => "Forums",
                  'd' => "I don’t spend much time on the Internet.",
                ),
            ),
     6  => array(
                'question' => "Favorite celebrity?",
                'answers' => array(
                  'a' => "Nicki Minaj",
                  'b' => "Justin Timberlake",
                  'c' => "Pete Wentz",
                  'd' => "Bob Dylan",
                ),
            ),
    ),
  );



  $quiz[5] = array(
    "number" => 6,
    "title"  => "What Type of Volunteering Suits You?",
    "description" => "",
    "questions" => array(
     0  => array(
                'question' => "Your friend invites you for a sleepover at her house. Upon arrival, you realize that her family lives differently than you do. How do you respond to this?",
                'answers' => array(
                  'a' => "You prefer to stick with what you're comfortable with, but you guess you can at least get through the night.",
                  'b' => "Comment on the differences between your two families and imply that she should be more like you.",
                  'c' => "Go along with it and enjoy the experience.",
                  'd' => "Pretend to be sick and have your mom come get you.",
                ),
            ),
     1  => array(
                'question' => "You’re assigned a group project in class. What role do you assume?",
                'answers' => array(
                  'a' => "I usually do whatever task is assigned to me by my group members.",
                  'b' => "The part that I’m the most interested in. The rest is divided amongst the rest of the group, so that we all have equal work- loads.",
                  'c' => "I’m usually more of a leader in large groups. I tend to allocate jobs based on who would have the strongest performance, then I take whatever job is left to do.",
                  'd' => "Group projects? No thank you!",
                ),
            ),
     2  => array(
                'question' => "There’s a new transfer student at school. She is extremely shy and doesn’t know anybody yet. What do you do?",
                'answers' => array(
                  'a' => "I’m friendly when I see her in class. I’m trying to give her time to adjust to the new school.",
                  'b' => "There’s a new transfer student?",
                  'c' => "Invite her to have lunch with you and introduce her to all of your friends.",
                  'd' => "Nothing. You’re nice when you see her, but don’t go out of your way to get to know her.",
                ),
            ),
     3  => array(
                'question' => "What is your dream job?",
                'answers' => array(
                  'a' => "Teaching.",
                  'b' => "An environmental warrior, saving plants and animals.",
                  'c' => "Lawyer! You dream of protecting people and/or the environment with the power of the law.",
                  'd' => "A researcher.",
                ),
            ),
     4  => array(
                'question' => "If you could solve one issue plaguing our society, what would it be?",
                'answers' => array(
                  'a' => "Improve literacy rates and equalize education.",
                  'b' => "Make sure all animals have homes.",
                  'c' => "Pass legislation to protect the environment and eliminate pollution.",
                  'd' => "Eliminate disease.",
                ),
            ),
     5  => array(
                'question' => "In your spare time, you…",
                'answers' => array(
                  'a' => "Read and work as a tutor.",
                  'b' => "Walk your dog and surf the Internet.",
                  'c' => "Browse the Internet to stay current with local news stories.",
                  'd' => "Knit and bake.",
                ),
            ),
    ),
  );


  $quiz[6] = array(
    "number" => 7,
    "title"  => "What’s Your Style Quiz?",
    "description" => "",
    "questions" => array(
     0  => array(
                'question' => "What type of shoes do you prefer to wear?",
                'answers' => array(
                  'a' => "Tennis Shoes",
                  'b' => "Heels",
                  'c' => "Boots",
                  'd' => "Flats",
                ),
            ),
     1  => array(
                'question' => "Your ideal outfit:",
                'answers' => array(
                  'a' => "Anything that allows me to move around comfortably.",
                  'b' => "A dress!",
                  'c' => "Skinny jeans, boots, and a neutral cardigan",
                  'd' => "Jeans, flats, and a cute shirt!",
                ),
            ),
     2  => array(
                'question' => "What’s your favorite color palette?",
                'answers' => array(
                  'a' => "Bright colors",
                  'b' => "Black",
                  'c' => "Neutrals- browns, blacks, grays",
                  'd' => "Muted colors",
                ),
            ),
     3  => array(
                'question' => "If you could live anywhere, where would it be?",
                'answers' => array(
                  'a' => "A small town",
                  'b' => "In the middle of a large city",
                  'c' => "In the middle of nowhere",
                  'd' => "A small town that’s close to the city.",
                ),
           ),
     4  => array(
                'question' => "Your overall attitude could be described as:",
                'answers' => array(
                  'a' => "Laid back, but energetic.",
                  'b' => "Detail oriented.",
                  'c' => "Stubborn, but in a good way. You know what you want!",
                  'd' => "Easy going. You’re always up for anything.",
                ),
           ),
    ),
  );








  $quiz[7] = array(
    "number" => 8,
    "title"  => "Movies - What movie genre do you like?",
    "description" => "",
    "questions" => array(
     0  => array(
                'question' => "Who’s your favorite movie couple?",
                'answers' => array(
                  'A' => "Julia Roberts and Hugh Grant in Notting Hill",
                  'B' => "Jake Gyllenhall and Heath Ledger in Brokeback Mountain",
                  'C' => "Robert Downey Jr. and Jude Law in Sherlock Holmes",
                  'D' => "Alex Pettyfer and Dianna Agron in I Am Number Four",
                ),
           ),
     1  => array(
                'question' => "When you watch a movie, what do you want the main character to do?",
                'answers' => array(
                  'A' => "trip over a banana peel and make a fool of themselves in front of their crush",
                  'B' => "discover a long-lost love",
                  'C' => "save the planet from destruction from an evil alien race",
                  'D' => "fight a flesh-hungry zombie",
                ),
           ),
     2  => array(
                'question' => "Do you like to talk about your emotions with friends or family?",
                'answers' => array(
                  'A' => "Yes! I am very open about my emotions.",
                  'B' => "Kind of—if it’s really necessary.",
                  'C' => "I try not to; I’m a private person.",
                  'D' => "I rarely share my feelings with others.",
                ),
           ),
     3  => array(
                'question' => "Do you like jokes and slapstick?",
                'answers' => array(
                  'A' => "Yes-I laugh all the time!",
                  'B' => "It depends if it’s really funny or just dumb.",
                  'C' => "I’ll maybe chuckle a little bit at a joke.",
                  'D' => "I never laugh out loud.",
                ),
           ),
     4  => array(
                'question' => "How do you feel when you watch a kissing scene?",
                'answers' => array(
                  'A' => "Give me more! No movie has enough kissing scenes for me.",
                  'B' => "Love it! Romance is the best.",
                  'C' => "Well if it makes sense in the plot, I’ll watch it.",
                  'D' => "Eww! Gross! Not for me.",
                ),
           ),
     5  => array(
                'question' => "What type of clothing do you want your favorite character to be wearing during the movie?",
                'answers' => array(
                  'A' => "Fancy dresses and skirts",
                  'B' => "Jeans with a nice shirt",
                  'C' => "Just whatever is lying around their house",
                  'D' => "Workout clothes that they can move around in",
                ),
           ),
    ),
  );



  $quiz[8] = array(
    "number" => 9,
    "title"  => "Elements –What Type of Element are You?",
    "description" => "",
    "questions" => array(
     0  => array(
                'question' => "Which animal do you like the best?",
                'answers' => array(
                  'A' => "rabbit",
                  'B' => "shark",
                  'C' => "hawk",
                  'D' => "phoenix",
                ),
           ),
     1  => array(
                'question' => "If you could pick one activity to learn, it would be:",
                'answers' => array(
                  'A' => "rock-climbing",
                  'B' => "white-water rafting",
                  'C' => "paragliding",
                  'D' => "juggling with flaming torches",
                ),
           ),
     2  => array(
                'question' => "What is your favorite color?",
                'answers' => array(
                  'A' => "green/brown",
                  'B' => "blue/purple",
                  'C' => "white/silver",
                  'D' => "orange/red",
                ),
           ),
     3  => array(
                'question' => "How do you like to travel?",
                'answers' => array(
                  'A' => "by train or car",
                  'B' => "by boat",
                  'C' => "by plane",
                  'D' => "by foot",
                ),
           ),
     4  => array(
                'question' => "Which movie do you prefer?",
                'answers' => array(
                  'A' => "Journey to the Center of the Earth",
                  'B' => "Waterworld",
                  'C' => "Up in the Air",
                  'D' => "Ladder 49",
                ),
           ),
     5  => array(
                'question' => "You have the day off from school. Which activity would you prefer to do with your friends?",
                'answers' => array(
                  'A' => "Plant flowers in a garden",
                  'B' => "Canoe on a meandering brook",
                  'C' => "Fly kites in a peaceful meadow",
                  'D' => "Learn to start a fire with two sticks",
                ),
           ),
    ),
  );









  $quiz[9] = array(
    "number" => 10,
    "title"  => "Are you an Introvert or an Extrovert?",
    "description" => "",
    "questions" => array(
     0  => array(
                'question' => "How many “best friends” do you have?",
                'answers' => array(
                  'A' => "six or more",
                  'B' => "four or five",
                  'C' => "three",
                  'D' => "just one, and I’ve known him/her forever",
                ),
            ),
     1  => array(
                'question' => "You have a class assignment in which you can either explain something verbally, or write it out. You choose to:",
                'answers' => array(
                  'A' => "I’ll always pick to do it verbally-I’m really good at communicating this way.",
                  'B' => "It depends, but probably verbally because it’s faster and easier.",
                  'C' => "Probably write it out, because then it’s more precise.",
                  'D' => "Definitely write it out, because that’s a lot easier for me then talking to people.",
                ),
            ),
     2  => array(
                'question' => "Do you like being alone?",
                'answers' => array(
                  'A' => "Nooooo- anything but that!",
                  'B' => "Not usually, but sometimes it’s nice to have me-time.",
                  'C' => "Generally yes, I do my best thinking when alone.",
                  'D' => "ALL THE TIME- I don’t feel comfortable in big groups.",
                ),
            ),
     3  => array(
                'question' => "Are you a good listening, or do you prefer to be the one talking?",
                'answers' => array(
                  'A' => "I always need to be talking.",
                  'B' => "I talk most of the time but I can listen on occasion.",
                  'C' => "I mostly listen, but also give my opinion when it’s needed.",
                  'D' => "I prefer to listen, and my friends tell me I’m good at it.",
                ),
            ),
     4  => array(
                'question' => "What’s your ideal birthday party?",
                'answers' => array(
                  'A' => "a giant blow-out bash at my favorite restaurant with fifty friends",
                  'B' => "a fun party with twenty friends at my house",
                  'C' => "a manageable soiree with six or eight of my oldest friends",
                  'D' => "A small get-together with just me and my immediate family.",
                ),
            ),
     5  => array(
                'question' => "How would your friends describe you?",
                'answers' => array(
                  'A' => "I’m the life of the party-never a dull moment with me!",
                  'B' => "I’m always game for a celebration or hanging out, but I need “me-time” too.",
                  'C' => "I like to keep things chill but I like to hang out with my friends on Friday and Saturday nights.",
                  'D' => "I’m pretty mellow-I’m happiest in quiet spaces by myself or with a few friends.",
                ),
            ),
    ),
  );





  $quiz[10] = array(
    "number" => 11,
    "title"  => "Are you a reliable friend?",
    "description" => "",
    "questions" => array(
     0  => array(
                'question' => "Your friend’s birthday party is the same night as your favorite band’s concert.  What do you do?",
                'answers' => array(
                  'A' => "Obviously, go to the birthday party. It’s for my best friend, after all.",
                  'B' => "See if I can find a way to see part of the concert, then meet up with my friend later-the best of both worlds!",
                  'C' => "Ask my friend to reschedule the party and come to the concert with me.",
                  'D' => "Blow off the party for the concert-after all, my friend has one every year!",
                ),
            ),
     1  => array(
                'question' => "You are doing a group project. Which best describes you?",
                'answers' => array(
                  'A' => "I do my part as well as everyone else’s, just in case.",
                  'B' => "After I finish my part, I ask around if anyone else needs help.",
                  'C' => "I do just the bare minimum and hope everyone else does their part.",
                  'D' => "I don’t bother doing my part-someone else will deal with it.",
                ),
            ),
     2  => array(
                'question' => "What time do you get to school in the morning?",
                'answers' => array(
                  'A' => "I always arrive twenty minutes early, just in case there’s traffic.",
                  'B' => "I get there five minutes early to get settled and put my stuff in my locker.",
                  'C' => "I drive up right as the bell is ringing at 8:00.",
                  'D' => "I usually sleep through my alarm and often miss my first class.",
                ),
            ),
     3  => array(
                'question' => "Your friend asks you for help with editing her essay. What do you do?",
                'answers' => array(
                  'A' => "I offer to help her in any way I can.",
                  'B' => "I read over her essay once and look for mistakes.",
                  'C' => "I say I’ll help her, but accidentally forget.",
                  'D' => "I say I probably don’t have time to help her.",
                ),
            ),
     4  => array(
                'question' => "Your best friend calls from the airport. Her parents aren’t able to pick her up, and she needs a ride home. What do you do?",
                'answers' => array(
                  'A' => "I jump in my car to get her, even if I had other plans.",
                  'B' => "I call my other best friend and ask her, since I don’t have a car.",
                  'C' => "I tell her I can’t pick her up but commiserate with her and listen to her complain.",
                  'D' => "I say I can’t do it, because Pretty Little Liars just came on.",
                ),
            ),
     5  => array(
                'question' => "Your best friend has started smoking. What is your reaction?",
                'answers' => array(
                  'A' => "Ask him/her to quit, and explain about all the horrible side effects",
                  'B' => "threaten to tell his/her family",
                  'C' => "try a cigarette myself, to see what all the fuss is about",
                  'D' => "It’s none of my business-it’s a free country!",
                ),
              ),
    ),
  );








  $quiz[11] = array(
    "number" => 12,
    "title"  => "What type of Entertainment do you prefer?",
    "description" => "",
    "questions" => array(
     0  => array(
                'question' => "When you hear a story you like to:",
                'answers' => array(
                  'A' => "Experience if for myself, so I can imagine what all the characters look like",
                  'B' => "Look at it from a musical perspective",
                  'C' => "See it happening in front of me, totally detached from the viewer",
                  'D' => "See it acted out in real-time, with real people",
                ),
            ),
     1  => array(
                'question' => "Where do you like to be when you are entertained?",
                'answers' => array(
                  'A' => "my house",
                  'B' => "a loud party",
                  'C' => "a dark room or movie theater",
                  'D' => "a beautiful old theater",
                ),
            ),
     2  => array(
                'question' => "How long do you like to pay attention for?",
                'answers' => array(
                  'A' => "for different amounts of time, whenever I feel like it",
                  'B' => "three minute chunks",
                  'C' => "about two hours",
                  'D' => "two to three hours, with an intermission to split it up",
                ),
            ),
     3  => array(
                'question' => "What do you like to do when you are entertained?",
                'answers' => array(
                  'A' => "curl up on the coach or in a chair in quiet space",
                  'B' => "dance",
                  'C' => "sit down and relax with a bowl of popcorn",
                  'D' => "get totally lost in the story",
                ),
            ),
     4  => array(
                'question' => "Do you like to participate with people?",
                'answers' => array(
                  'A' => "No people, just me",
                  'B' => "Yeah, lots of people who know the song",
                  'C' => "Yes, a group of people so we can whisper throughout",
                  'D' => "Yes but I want to forget they’re there",
                ),
            ),
    ),
  );
  return $quiz;
}
