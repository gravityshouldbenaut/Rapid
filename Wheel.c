/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

typedef struct {
    float(*MotorOnOrOff)(const WheelClass *wheel); 
   
}WheelClass;

float wheel_MotorOnOrOff (const WheelClass *wheel){
    return 1;
    
}
