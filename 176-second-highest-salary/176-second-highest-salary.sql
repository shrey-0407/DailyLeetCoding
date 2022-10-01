select distinct max(salary)
as SecondHighestSalary from employee as a
where salary <(select max(salary) from employee as b where a.salary<b.salary);