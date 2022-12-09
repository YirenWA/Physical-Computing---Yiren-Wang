# Physical-Computing---Yiren-Wang
# Week 0 - Mending Relationships?   
Topic:  
My topic is whether the hurt done in a relationship can be repaired by literal language. 

Background:  
The inspiration comes from a personal experience and some current social phenomena.  
In my view, there is no way that past hurts in a relationship can be repaired by some words later on. The act of mending is a true disclosure of the hurt, and it more likes a secondary injury.  

About Work:  
It is an interactive installation.  
Participants write down some memorable words they have heard in a relationship on the place of the crack or hurt that they want to mend on this installation. And then the machine starts to moving and sewing the “words” over the crack.  
With more and more words sewing on it, the overlapping words and sewing threads reach a certain thickness. Participants can observe that no more words can be mended. This may be the result. The process of everyone's interactive participation has made this work. In the end it is also like an artwork in itself, expressing a point of view and containing many stories.

Initial ideas for the Structure:  
For the structure of the mending machine, I would like to use a sewing machine or a stapler. One that has more of a sewing feel to it. And with the staples looking and sounding more like a hurt.  

![week0 2](https://user-images.githubusercontent.com/119879041/206622711-4c3d4c89-094c-4eb7-8f06-1b0602e82517.jpg)

  
   
# Week 1
This week I will be thinking about implementing interactive Inputs and Outputs and the structure of how the installation works.  

Possible Inputs and Outputs to explore:  

Input 1:  Person " inputs" the words onto the sensing area - Touch sensor  
Output 1:  The sewing machine moves to the specified position - Stepper motor/ Servo motor  
Input 2:  Person triggers the switch to start the machine - ? sensor  
Output 2:  Sewing machine starts mending - DC motor / Stepper motor / Servo motor  


Input 1:  Hand moves in front of the installation - Ultrasonic sensor  
Output 1:  Machine follows hand movement position - Servo motor  
Input 2:  Person "inputs" words onto the installation- Pressure sensor (sensing area should be large)  
Output 2:  Sewing machine starts mending - DC motor / Stepper motor / Servo motor  
  
  
Conception of the installation structure:  
1. Using the track, create X,Y,Z axes. Lifting and moving left and right.
2. Flexible gear structure for transfer to the specified position. Is it possible to plan the area to be mended, to set the conversion of the tracks, to recognise different areas to give different movement results and to position them precisely.
3. Placement of two sewing machines to differentiate between left and right sensing.
4. ...

Inputs and outputs initially decided after the first week of experiments in combination with the installation structure:  

Input1: People approaching the installation and " input " words - IR / PIR sensor  
Output1: Sewing machine starts mending - DC motor / Stepper motor / Servo motor  
Input2: Person approaching the installation - Ultrasonic sensor  
Output2: Light under the repaired surface lights up to show the damage and repair on the mended surface - LED  




# Week 2  
This week I will explore the structural principles of how a sewing machine works and combine them with my own installation. 
  
I bought the sewing machine and dismantled its construction and carried out research which led to the following results:  
Firstly, my sewing machine need a movable part that work like a stapler. The lower part of the machine is fixed on a stable vertical surface by means of a motor and gears that drive the upper part into motion. For the construction of the sewing needle hole, I made a track to guide the thread and adjusted the height of the needle to ensure that the hook could hook the thread so that it would not come off.  
Finally, I made it.  

![week2](https://user-images.githubusercontent.com/119879041/206621432-28a9a8af-09f9-43c5-b372-ac5fc1d5de08.jpg) 

https://user-images.githubusercontent.com/119879041/206625444-89b2e587-194d-472e-bfe3-4412095c5c44.mp4

Mending structure of the whole installation:  
The mend is divided into two parts. One is stationary and the other is in motion. Initially, I wanted to get the sewing machine in motion to find the mended surface. After testing the sewing machine I found that it was too heavy to steer steadily on its own. So I changed my thinking and wanted the surface being sewn to move.  

In terms of its movement, I have experimented with rotation and linear movement and have concluded that rotation is the best to achieve. But the question is what part to use as the central axis.  
1. The axis of rotation is the point for the edge of the mended surface. And the range of rotation angles is within the setting. (Problem: the support is unstable, that needs to be solved)  
2. The centre of the mending surface is the axis of rotation, with the sewing machine in the centre.  

![week2 sketch](https://user-images.githubusercontent.com/119879041/206706696-40a18071-0c60-42bd-9763-e8fb4d9d5615.jpg)

In order to get plenty of experimentation, structurally I chose to hand frame the structure myself. This allowed for constant modification.  
At the same time the combination of this week's work also determines the final Inputs and Outputs:  

Input1: People approaching the installation and " input " words - IR sensor  
Output1.1: Sewing machine starts working - DC motor   
Output1.2: Mended surface starts to rotate - DC motor / Servo motor  
Input2: Person approaching the installation - Ultrasonic sensor   
Output2: Light under the repaired surface lights up to show the damage and repair on the mended surface - LED  



# Week 3
This week it was mainly about choosing the motor, and the connection of its circuit.  
  
I have been experimenting with a variety of motors. The DC motor, the gear DC motor, the 180 degree servo motor, the 360 degree servo motor. 
Later, in order to achieve a one IR sensor to control two motors at the same time. I use an L298N Motor Driver Board to connect two DC motors. However, it is not possible to achieve a large difference in speed between the two. The sewing DC motor needed to be fast and the surface being mended was very slow.  

![week4](https://user-images.githubusercontent.com/119879041/206632161-3b122134-96f6-4273-a9ac-f04cabb28f77.jpg)

I tried many ways to control the speed, from the code, to increasing the friction internally and externally, to slowing down the DC motor, but nothing worked. The solution was to use a servo motor to drive the mended surface. After experimenting with the large 180 degree servo motor, it was possible to drive the entire surface in a stable manner.  

I finally used a DC MOTOR and a SERVO MOTOR and connected them to the two arduino boards separately. By connecting the boards in series. Where the servo motor is connected to the IR sensor on one board, the sensor receives the signal and sends it to the other board, enabling the stable function of the two motors.
By connecting the boards in series and sending signals, a stable operation was achieved. For every rotation of the mended surface within a fixed angle, a further reverse rotation is performed.

![week4。1](https://user-images.githubusercontent.com/119879041/206634198-22210ae8-abd0-4eff-9495-33b1f07bcb65.jpg)  

I soldered parts of it.  

![week3](https://user-images.githubusercontent.com/119879041/206686214-caab1245-4d51-45b3-965c-fb6a5d365d59.jpg)


The machine stops working when the participant approaches. When the participant leaves, the machine resumes working.

# Week 4
This week is about exploring lighting and materials.  
  
Lighting (with materials)：  
The Ultrasonic sensor is used to control two led lights to light up the mended area. The lights come on as the participants approach. The lights shine through the canvas and the stacked layers of damage can be observed.  

So when it comes to the choice of fabric, it should have some light transmission and be able to hold it in place and be moderately stiff. The lighting adds a sense of ritual to the mending and is an appropriate output. But the distance needs to be mastered in production, the distance from the person to the sensor and the distance from the led to the surface being mended.  
It is also important to consider that the position of the light remains the same, so fix the light and the sewing machine on a flat surface so that the light is also kept at a distance from the mended surface to achieve a light transmission effect. I also compared the thickness of the needle and the size of the holes in the sewing machine.  

![week4 2](https://user-images.githubusercontent.com/119879041/206681626-6913c636-7971-4ca2-8100-f5061cdf0190.jpg)  

I soldered the leds with the resistor connected to the main board.

![焊接](https://user-images.githubusercontent.com/119879041/206687474-389c1c3e-016a-4069-bcdc-f8ba90466bdd.jpg)

![week4。3](https://user-images.githubusercontent.com/119879041/206686703-adb30419-34c3-492b-9e2b-534a4074beb7.jpg)

Rethinking the structure:  
After completing the code, I began to improve the structure of the device, thinking about the position of the sewing machine in relation to the mended surface.   

 ![week5组装](https://user-images.githubusercontent.com/119879041/206704129-26c92c65-10cf-4708-8d72-8d4342a730c2.jpg)

The final selection was to pass the sewing machine through the surface being mended and to keep the surface of the lower part of the sewing machine at a horizontal height to the surface being mended. 



# Week 5  
Final adjustment and assembly took place this week.  
The main problem occurred on the surface of the sewing contact.  
I kept adjusting the height to ensure that the thread would be sewn into the surface.


![week5 1](https://user-images.githubusercontent.com/119879041/206689833-bbd2e949-e99b-43b8-b885-7b39346157c7.jpg)
![week5](https://user-images.githubusercontent.com/119879041/206687848-0d8c06db-ac83-4baa-98e0-3b9546e94eef.jpg)  

Video: https://youtu.be/t61L5WNlduQ  

Future possibilities:  
The participant sends out the text content on a digital carrier and the sewing machine directly stitches out the word content on the mended surface.  

![2](https://user-images.githubusercontent.com/119879041/206761256-39f6ddda-65a9-4d9c-bf9f-6d0bdb46a28f.jpg)  

![近景1_01799](https://user-images.githubusercontent.com/119879041/206761305-8f05d1c1-6f8a-49dd-8ea4-f3af79c55a56.jpg)  

![微信图片_20221209174607](https://user-images.githubusercontent.com/119879041/206761657-c9b72d5a-1fd0-4154-92fc-494fe7bca453.jpg)


