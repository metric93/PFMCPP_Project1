#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

 write out 10 nouns.
 for each of the 10 nouns, write out 3 actions it might perform, in plain english.
 write out how you'd call that action in pseudo code, in the space between each block comment
 
 If the action requires multiple words, use camelCaseToNameIt
 don't forget the semi-colon after each statement
 
 When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example)
 Noun:       arm
 action 1:   the arm extends
 action 2:   the arm flexes
 action 3:   the arm rotates conter-clockwise
 */
arm.extend();
arm.flex();
arm.rotateCounterClockwise(); //demonstrates CamelCase

/*
 1)
 Noun:      car
 action 1:  the car starts
 action 2:  the car turns left
 action 3:  the car stops
 */
car.start();
car.turnLeft();
car.stop()

/*
 2)
 Noun:      bird
 action 1:  the bird flies
 action 2:  the bird sings
 action 3:  the bird sleeps
 */
bird.fly();
bird.sing();
bird.sleep();

/*
 3)
 Noun:     synth
 action 1: the synth increases its pitch
 action 2: the synth plays a note
 action 3: the synth enables reverb
 */
 synth.increasePitch();
 synth.playNote();
 synth.enableReverb();

/*
 4)
 Noun:      drum
 action 1:  the drum is hitting louder
 action 2:  the drum is hitting quiet
 action 3:  the drum size is increasing
 */
drum.hitLoud();
drum.hitQuiet();
drum.increaseSize();

/*
 5)
 Noun:      food
 action 1:  the food gets cold
 action 2:  the food gets heated
 action 3:  the food turns bad
 */
food.cold();
food.heated();
food.turnBad();

/*
 6)
 Noun:      mediaplayer
 action 1:  the mediaplayer starts playback
 action 2:  the mediaplayer stops playaback
 action 3:  the mediaplayer selects song
 */
mediaplayer.playbackStart();
mediaplayer.playbackStop();
mediaplayer songSelect();

/*
 7)
 Noun:      train
 action 1:  the train departs
 action 2:  the train arrives
 action 3:  the train opens its doors
 */
train.depart();
train.arrive();
train.openDoors();

/*
 8)
 Noun:      clock
 action 1:  the clock is ticking
 action 2:  the clock is ringing
 action 3:  the clock is getting muted
 */
clock.ticking();
clock.ringing();
clock.mute();

/*
 9)
 Noun:      phone
 action 1:  the phone is charging
 action 2:  the phone is lost
 action 3:  the phone is ringing
 */
phone.charge();
phone.lost();
phone.ring();

/*
 10)
 Noun:      distortion
 action 1:  the distortion is set to sound soft
 action 2:  the distortion is set to sound warm
 action 3:  the distortion is set to sound heavy
 */
distortion.setSoft();
distortion.setWarm();
distortion.setHeavy();

#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
