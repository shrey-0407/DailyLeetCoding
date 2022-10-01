# select distinct max(salary)
# as SecondHighestSalary from employee as a
# where salary <(select max(salary) from employee as b where a.salary<b.salary);


select max(e1.salary) as SecondHighestSalary
from employee e1 join employee e2
on e1.salary<e2.salary;