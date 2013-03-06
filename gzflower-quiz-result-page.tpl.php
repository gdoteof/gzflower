<div class='quiz-result' id='quiz-result-<?php print $quiz_num?>'>
  <div class='quiz-title'><?php print $quiz['title'] ?> </div>
  <div class='quiz-result'><?php print $result['description'] ?> </div>
</div>
<div class="back-to-profile-container"><?php print l('See your profile shape!', 'user/' . $account->uid . '/flower') ?></div>
