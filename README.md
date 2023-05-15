# CS370-Final-Project

In order to run the code on your machine:

1) Import starter content
2) Open the BP_TopDownPlayerCharacter blueprint under TopDown->Blueprints
3) Under the comment titled "Hit Debris":
4) For the first "Play Sound at Location node" set the sound to "Explosion_01"
5) For the second "Play Sound at Location node" set the sound to "Explosion_02"
6) Now under Components on the left side of the screen:
7) Set the template for DamagedShipParticles to "P_Smoke"
8) Set the template for CriticalShipDamage to "P_Fire"
9) Set the template for PlayerDead to "P_Explosion"

When running, only run either in "Selected Viewport" mode or "New Editor Window (PIE)"
Recommended on slower machines:
  1) Under settings:
  2) Change engine scaleability settings to medium or low
  3) Change "effects" under this menu to epic

Controls:
  W/A - move forward and back
  A/D - rotate boat counter clockwise and clockwise
  L - toggle lights on boat
  TAB - toggle upgrade shop menu 
  Left Clock - initiate fishing
  E - reel in fish
  Right Arrow - cycle through bait
