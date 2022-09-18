# Write your MySQL query statement below

select Customers.name as Customers
from Customers
where Customers.id NOT IN
(
  SELECT customerId from Orders  
);




# SELECT Customers.name AS Customers 
# FROM Customers
# WHERE Customers.id NOT IN 
# (
#    SELECT customerId from Orders
# );