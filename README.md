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
With more and more words sewing on it, the overlapping words and sewing threads reach a certain thickness. Participants can observe that no more words can be mended. This may be the result.  
The process of everyone's interactive participation has made this work. In the end it is also like an artwork in itself, expressing a point of view and containing many stories.

Initial ideas for the Structure:  
For the structure of the mending machine, I would like to use a sewing machine or a stapler. One that has more of a sewing feel to it. And with the staples looking and sounding more like a hurt.  
![week0 2](https://user-images.githubusercontent.com/119879041/206622711-4c3d4c89-094c-4eb7-8f06-1b0602e82517.jpg)

  
   
# Week 1
This week I will be thinking about the structures that enable interactive Input and Output and the work of the installation.

Possible Inputs and Outputs to explore

Input1  
Output1 

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

1. The centre of the mending surface is the axis of rotation, with the sewing machine in the centre. 
2. The axis of rotation is the point for the edge of the mended surface. And the range of rotation angles is within the setting. (Problem: the support is unstable, that needs to be solved)  


In order to get plenty of experimentation, structurally I chose to hand frame the structure myself. This allowed for constant modification. 



# Week 3
This week it was mainly about choosing the motor, and the connection of its circuit.  
  
I have been experimenting with a variety of motors. The DC motor, the gear DC motor, the 180 degree servo motor, the 360 degree servo motor. 
Later, in order to achieve a one IR sensor to control two motors at the same time. I use an L298N Motor Driver Board to connect two DC motors. However, it is not possible to achieve a large difference in speed between the two. The sewing DC motor needed to be fast and the surface being mended was very slow.  
![week4](https://user-images.githubusercontent.com/119879041/206632161-3b122134-96f6-4273-a9ac-f04cabb28f77.jpg)

I tried many ways to control the speed, from the code, to increasing the friction internally and externally, to slowing down the DC motor, but nothing worked. The solution was to use a servo motor to drive the mended surface. After experimenting with the large 180 degree servo motor, it was possible to drive the entire surface in a stable manner.  

I finally used a DC MOTOR and a SERVO MOTOR and connected them to the two arduino boards separately. By connecting the boards in series. Where the servo motor is connected to the IR sensor on one board, the sensor receives the signal and sends it to the other board, enabling the stable function of the two motors.
By connecting the boards in series and sending signals, a stable operation was achieved.

![week4。1](https://user-images.githubusercontent.com/119879041/206634198-22210ae8-abd0-4eff-9495-33b1f07bcb65.jpg)
The machine stops working when the participant approaches. When the participant leaves, the machine resumes working.

# Week 4
This week is about exploring lighting and materials.  
  
Lighting：
The Ultrasonic sensor is used to control two led lights to light up the mended area. The light shines through the canvas and the stacked layers of damage can be observed. The lighting adds a sense of ritual to the mending and is an appropriate output. But the distance needs to be mastered in production, the distance from the person to the sensor and the distance from the led to the surface being mended. 

https://user-images.githubusercontent.com/119879041/206636985-129ff9ea-52a3-4002-abc7-4e884c8a553c.mov






# Week 5


