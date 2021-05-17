char millimiter[5] = "mm", centimeter[5] = "cm", meter[5] = "m", inches[5] = "in", feet[5] = "ft", yard[5] = "yd";
double mm, cm, m, inch, ft, yd;

void expMil(){
  
  printf("Enter the length in millimeters:\n");
  scanf("%lf", &mm);
  cm = mm/10; m = mm/1000; inch = mm/25.4; ft = mm/304.8; yd = mm/914.4;
  printf("You entered %lf millimiter, which is equal to:\n", mm);
  printf("%0.2lf centimeters, %0.2lf meters, %0.2lf inches, %0.2lf feet, and %0.2lf yards\n", cm, m, inch, ft, yd);
}

void expCm(){
  printf("Enter the length in centimeters \n");
  scanf("%lf", &cm);
  mm = cm*10; m = cm /10 ; inch = cm / 2.54; ft = cm / 30.48; yd = cm / 914.4;
  printf("You entered %lf centimeters, which is equal to:\n", cm);
  printf("%0.2lf millimeters, %0.2lf meters, %0.2lf inches, %0.2lf feet, and %0.2lf yards\n", mm, m, inch, ft, yd);
}

void expM(){
  printf("Enter the length in meters \n");
  scanf("%lf", &m);
  mm = m * 1000; cm = m * 100; inch = m / 39.37; ft = m * 3.281; yd = m * 1.094;
  printf("You entered %lf millimiters, which is equal to:\n", m);
  printf("%0.2lf millimeters, %0.2lf meters, %0.2lf inches, %0.2lf feet, and %0.2lf yards\n", mm, m, inch, ft, yd);

}

void expIn(){
  printf("Enter the length in inches \n");
  scanf("%lf", &inch);
  mm = inch * 25.4; cm = inch * 2.54; m = inch * 0.0254; ft = inch / 12; yd = inch / 36 ;
  printf("You entered %lf inches, which is equal to:\n", inch);
  printf("%0.2lf millimeters, %0.2lf centimeter, %0.2lf meters, %0.2lf feet, and %0.2lf yards\n", mm, cm, m, ft, yd);

}

void expFt(){
  printf("Enter the length in feet \n");
  scanf("%lf", &ft);
  mm = ft / 304.8; cm = ft / 30.48; m = ft / 3.281; inch = ft * 12; yd = ft / 3;
  printf("You entered %lf feet, which is equal to:\n", ft);
  printf("%0.2lf millimeters, %0.2lf centimeters, %0.2lf meters, %0.2lf inches, and %0.2lf yards\n", mm, cm, m, inch, yd);

}

void expYd(){
  printf("Enter the length in yards \n");
  scanf("%lf", &yd);
  mm = yd * 914.4; cm = yd * 91.44; m = yd * 1.094; inch = yd * 36; ft = yd * 3;
  printf("You entered %lf yards, which is equal to:\n", yd);
  printf("%0.2lf millimeters, %0.2lf centimeters, %0.2lf meters, %0.2lf inches, and %0.2lf feet\n", mm, m, inch, ft, yd);

}
