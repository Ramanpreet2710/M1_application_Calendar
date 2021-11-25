
Requirements

Identifying features

This mini project on Calendar in C programming language is a console application without graphics.

In this mini project, you can find out the whole year calendar which you need. We can also find the particular day,date of any year in it.As it will be easy for us to find out any details regarding any year like any day,date.
To help you understand the calendar mini project better, there are lots of comments within the source code. This project is aimed to teach you "how to make Calendar using C".

State of art/Research

Basically we can find the whole year calender according to our need ,particular date,day and year.Like we want to view the last year calendar then we can easily get it or else we can find any year calender without any difficulty.

SWOT ANALYSIS

| Strengths*Easy to use application*Uses file handling | Weakness*Graphics are not being used

|
| — | — |
| Opportunities*Can be implemented using graphics for more interaction. | Threats* |Can be modified easily

4W's and 1H

WHO- In today's life each one of us is occupied with lots of work to do and some times we missed some important things,to mark it down we can make notes in it.We can get know easily the day on which we will be free and can plan accordingly.

WHEN-Anytime ,anyone can use it easily.

What- Calendar,for marking important days and dates.

Where-It can be used anywhere ,according to need.

How-This application was developed in c language for the easy use.
High level Requirements:

ID Description Category Status

|HR01|User shall be able to see the current year   |    Technical   |         Implemented|


|HR02| User shall be able to navigate to           |    Technical    |        Implemented|
a previous year or the next year .

|HR03| User can easily find any day of any month of any year| Technical  |     Implemented|

Low level Requirements:

ID Description HLR Status
ID

|LR01 |If a year is divisible by 4, then it is a leap year. But if that year is divisible by 100, then it is not a leap year. However, if the year is also divisible by 400, then it is a leap year.|Implemented|


|LR02| if that year is divisible by 100, then it is not a leap year.|Implemented|


|LR03| If the year is also divisible by 400, then it is a leap year.| Implemented|


<img width="361" alt="behavioral" src="https://user-images.githubusercontent.com/94223070/143253086-a46be513-c243-44a5-85b6-2576cb182218.png">
<img width="560" alt="structural" src="https://user-images.githubusercontent.com/94223070/143253105-e0ad0507-d8e5-46e9-bc7d-621f782b5e4c.png">

# Implementation

## Folder Structure

---

| Folder | Description                                  |
| ------ | -------------------------------------------- |
| inc    | All headers files                            |
| src    | Main source code                             |
| unity  | All unity files                              |
| test   | All source code and data for testing purpose |
| build  | Build output (not included in git)           |



## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Check whether the year is valid or not|303|    --invalid--|invalid|Requirement based|  ------------|-------------|----------------|Requirement based |
|  H_02       |Valid year enter   |                  2020|2020 calendar|2020 calendar|Requirement based | --------------------------------

## Table no: Low level test plan
| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |check whether year entered|-2021|2021 calendar|          2021 calendar             |Requirement based |-------------------------------------------
|  L_02      |  no year entered|-blank| enter the valid year   |    enter the valid year  |Requirement based    |-------------------------------------------------
|  L_03      | check whether month is valid or not| 18|Enter valid month|Enter valid month|Boundary based|
| L-04       | check whether month is valid or not| 11|11|11|Boundary based|
|L-05        | check whether date is valid or not| 46|invalid|invalid|Boundary based|

![1](https://user-images.githubusercontent.com/94223070/143242161-17b33a94-9bc5-4715-8147-beea8bd1425d.jpeg)
![2](https://user-images.githubusercontent.com/94223070/143242222-e147884c-1780-47ee-a8fa-e42a9c06c1e4.jpeg)
![3](https://user-images.githubusercontent.com/94223070/143242247-5a55d4e3-8183-467a-98c4-8d6b33a4ea56.jpeg)
![4](https://user-images.githubusercontent.com/94223070/143242278-0bfb9c0b-7294-4696-9c2f-97f8d8795f36.jpeg)
![gif calendar](https://user-images.githubusercontent.com/94223070/143242301-bf32cbdd-482b-4bd3-a60b-341cfddf523b.gif)
