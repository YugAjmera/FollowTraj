# Follow_Trajectory

## Aim

1. The user controls the bot on a particular trajectory with the use of an android application.
2. The bot stores the trajectory.
3. The bot retraces the trajectory autonomously backwards coming back to intial position.

## Hardware

* Arduino Mega
* Stepper Motors x 4
* Mecanum Wheels x 4
* Bluetooth module HC-05

Application Used : Android Bluetooth RC Controller

**Note**:Since the SRAM of Mega is 8KB, the commands can be stored for a maximum of 3 minutes (approximate). To increase the time limit,saving the stop-time was also removed.



