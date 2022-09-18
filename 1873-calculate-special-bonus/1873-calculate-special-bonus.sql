# Write your MySQL query statement below


# select employee_id,
# salary * (employee_id%2) * (name not like "M%" ) as bonus 
# from Employees;


# select employee_id,
# if(employee_id%2 AND name not like "M%",salary,0) as bonus
# from employee order by employee_id;


# SELECT employee_id,
# IF (employee_id%2 AND name not like "M%", salary, 0) as bonus
# FROM employee order by employee_id;

select 
    employee_id,
    if(employee_id%2!=0 and name NOT LIKE 'M%',salary,0) as bonus 
from Employees 
order by employee_id