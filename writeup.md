[//]: # (Image References)
[image1]: ./gifs/oversteering.gif "Oversteering"

# PID Controller

P component: This parameter affects how fast the error can be minimized. The larger the error, the larger the steering value of the car in order to reduce the error. 

I component: The integral does not show obvious effect in the car simulator. However, it helps to 
reduce the error in the long run by taking into account the sum of the errors so far.

D component: Using P component alone will result in overshooting. D component helps to avoid overshoot by taking into account the error changes/ differential. Lower D parameter value won't help to overcome the overshoot effect of P parameter. Too high D value, however, causes lots of small oscillation around the reference line. Based on the experiments, the ratio of D/ I should be around 10 to avoid this issue.

![alt text][image1]

# Hyperparameters

The following control gains are used in this project:

P: 0.1
I: 0.002
D: 1.0

The hyperparameters were obtain through manual tuning and lots of experimentations. I started from choosing the P value first and some random D value. Choosing high P value seems to work fine when the car speed is still low. The car starts to overshoot when its speed reaches 30 mph. After several experiments, I discovered that small P value helps to stabilize the car when its speed reaches more than 30 mph. To compensate overshoot/ oscillation, I played with several D values. With the D value of 1.0 (i.e. the ratio of D/I is 10), the car does not oscillate too much or too often.
