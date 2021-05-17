float voltage, current, resistance, R1, R2;
  /*Below are the functions to calculate voltage, current, and resistance using Ohm's Law*/
void findVol(){                                       //Voltage calculator
  printf("Enter the resistance value:\n");
  scanf("%f", &resistance);
  printf("Enter the current value:\n");
  scanf("%f", &current);
  voltage = current * resistance;
  printf("Your voltage is %.2lf Volts", voltage);
}
void findCur(){                                       //Current calculator
  printf("Enter the voltage value:\n");
  scanf("%f", &voltage);
  printf("Enter the resistance value:\n");
  scanf("%f", &resistance);
  current = voltage / resistance;
  printf("Your current is %.2lf Amps", current);
}
void findRes(){                                         //Resistance calculator
  printf("Enter the voltage value:\n");
  scanf("%f", &voltage);
  printf("Enter the current value:\n");
  scanf("%f", &current);
  resistance = voltage / current;
  printf("Your resistance is %.2lf Ohms", resistance);
}
void findPara(){
  printf("Enter the first resistance value:\n");
  scanf("%f", &R1);
  printf("Enter the second resistance value\n");
  scanf("%f", &R2);
  resistance = (R1*R2)/(R1+R2);
  printf("Your resistance is %.2lf Ohms", resistance);
}