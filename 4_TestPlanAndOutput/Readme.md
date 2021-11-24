

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
