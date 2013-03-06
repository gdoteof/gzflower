<?php
  /*
    Preproccesed variables;
      $form : the quiz form
      $quiz: an associative array with the quiz metadata.
  */
?>
<div class="quiz-description"> 
  <?php print $quiz['description']; ?>
</div>

<div class="quiz-form-container">
  <?php print $form; ?>
</div>
