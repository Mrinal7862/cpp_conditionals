1. The first loop:

        int a;
        cout<<"Please enter the number: ";
        cin>>a;
        if(a>100){
            cout<<"Very good";
        }

        else if (a<100 && a>34){
            cout<<"lutwaate lutwaate bacha diya.";
        }
        else{
            cout<<"Waah bhai lutwa hi diya tumne";
        }

2. Write a program to divide people into 3 age groups depending upon their age 

        int age;
        cout<<"Please enter the age of the person: ";

        cin>>age;

        if(age<12){
            cout<<"Child";
        }
        else if(age>=12 && age<=18){
            cout<<"Teenager";
        }
        else{
            cout<<"Adult";
        }

3. **Nested If  else statement**

        cout<<"Please enter the marks of the aspirant: ";

        cin>>marks;

        if(marks==80){
            cout<<"Well done!!";
        }
        else if(marks<100){
            if(marks>90){
                cout<<"Excellent";
            }
        }
        else if(marks<80 && marks>50){
            cout<<"good";
        }
        else{
            cout<<"Try again!!";
        }        

4. **Common Misconceptions:** There are common mis-conceptions between '&', '&&' and '|', '||'

        **&** is Bitwise and while **&&** is the logical Operator

        **|** is Bitwise or, while **||** is the logical OR


    <h3>A question for && and | | :</h3>
        Write a program to print the value if it is even and divisible by 3.

        int value;

        cout<<"Enter the value which is divisible: ";

        cin>>value;

        if((value%2==0) && (value%3 == 0)){
            cout<<value;
        }
        
        else{
            cout<<"It is not divisible ";
        }    


5. **Switch Case** 


        cout<<"Enter the day number: ";

        cin>>day;

        switch (day){
            case 1:
            cout<<"Monday"<<endl;
            break;

            case 2:
            cout<<"Tuesday"<<endl;
            break;

            case 3:
            cout<<"Wednesday"<<endl;
            break;
            
            case 4:
            cout<<"Thursday"<<endl;
            break;

            case 5:
            cout<<"Friday"<<endl;
            break;

            case 6:
            cout<<"Saturday"<<endl;
            break;

            case 7:
            cout<<"Saturday"<<endl;

            default:
            cout<<"Kal sunday hai bhai jaa party kar!!";
        }

6. Check the vowels and the consunant with the help of switch case

        cout<<"Enter the day number: ";

        cin>>day;

        switch (day){
            case 1:
            cout<<"Monday"<<endl;
            break;

            case 2:
            cout<<"Tuesday"<<endl;
            break;

            case 3:
            cout<<"Wednesday"<<endl;
            break;
            
            case 4:
            cout<<"Thursday"<<endl;
            break;

            case 5:
            cout<<"Friday"<<endl;
            break;

            case 6:
            cout<<"Saturday"<<endl;
            break;

            case 7:
            cout<<"Saturday"<<endl;

            default:
            cout<<"Kal sunday hai bhai jaa party kar!!";
        }


<h1>Some Exercises: </h1>

1. What is the output of the following Snippet? 

        if x = 60 , y = 90 then;
        if y is divisible x print "Good" else "Bad"

    <h2>Solution: </h2>

        int x = 60, y = 90;

        if(y%x==0){
            cout<<"Good";
        }

        else{
            cout<<"Bad";
        }

2. Leap Year Checker:
Write a program that checks if a given year is a leap year. A year is a leap year if it is divisible by 4 but not by 100, unless it is also divisible by 400.

    <h2>Solution: </h2>

        int year;

        cout<<"Welcome to the Leap year Checker\n";

        cout<<"please Enter the year: ";

        cin>>year;

        if((year%4 ==0 && year % 100 != 0) || (year % 400 == 0))
        {
            cout<<"It is a leap year!!";
        }
            
        else{
            cout<<"It is not a leap year!!";
            }

3. Login System:
Create a simple login system where the user is asked to enter a username and password. If the username is "admin" and the password is "password123", print "Login successful", otherwise print "Invalid credentials".

    <h2>Solution:</h2>
    
        string username;

        string password;

        cout<<"Please enter your username: ";

        cin>>username;

        cout<<"Please enter your password: ";

        cin>>password;

        if((username == "admin") && (password == "password123")){
            cout<<"Access granted!!";
        }
        else{
            cout<<"Access Denied!!";
        }

4. Simple Calculator:
Create a simple calculator program that can perform basic arithmetic operations (addition, subtraction, multiplication, division). The user should input two numbers and an operator (+, -, *, /), and the program should output the result.

    <h2>Solution: </h2>

        float num1;
        float num2;
        char operation;
        cout<<"Welcome to the calculator\n";

        cout<<"Choose a number: ";
        cin>>num1;

        cout<<"Choose another number: ";
        cin>>num2;

        cout<<"Choose a mode of operation: ";
        cin>>operation;

        switch (operation){
            case '+':
            cout<<num1+num2;
            break;

            case '-':
            cout<<num1-num2;
            break;

            case '*':
            cout<<num1*num2;
            break;

            case '/':
            if(num2 == 0){
                cout<<"zero division error";
            }
            else{
                cout<<num1/num2;
            }
            break;

            default:
            cout<<"Please enter a valid operation...";
            }