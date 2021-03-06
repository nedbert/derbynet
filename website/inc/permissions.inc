<?php

// Defines individual permissions or privileges
// Permissions are assigned to the session when the user authenticates.
// Permissions can also be assigned for unauthenticated users; see init-roles.php.
// Each permission should be a distinct power of two.

// Controls viewing results organized by racer, rather than by heat.
// Some organizations may wish to disable this if trying to create a
// less competition-oriented environment.
DEFINE('VIEW_RACE_RESULTS_PERMISSION', 1);

// View an awards summary page.  Offering early results may make for a less
// dramatic awards ceremony.
DEFINE('VIEW_AWARDS_PERMISSION', 2);

// For checking in racers, normally for the race crew only:
DEFINE('CHECK_IN_RACERS_PERMISSION', 4);
DEFINE('REVERT_CHECK_IN_PERMISSION', 8);
// 16
DEFINE('REGISTER_NEW_RACER_PERMISSION', 32);
// Allow changing a racer's class (den) or rank (subgroup)
DEFINE('EDIT_RACER_PERMISSION', 64);
DEFINE('ASSIGN_RACER_IMAGE_PERMISSION', 128);
// Assign ad-hoc awards, design awards, Scouts Favorite award
DEFINE('JUDGING_PERMISSION', 256);
// Record heat results, advance heat, assign kiosks
DEFINE('CONTROL_RACE_PERMISSION', 512);
DEFINE('PRESENT_AWARDS_PERMISSION', 1024);
DEFINE('EDIT_AWARDS_PERMISSION', 2048);
DEFINE('TIMER_MESSAGE_PERMISSION', 4096);
DEFINE('PHOTO_UPLOAD_PERMISSION', 8192);
// 16394
DEFINE('SET_UP_PERMISSION', 32768);
DEFINE('ADMINISTRATION_PERMISSION', 65536);

// PHP ints are generally at least 32 bits...

?>