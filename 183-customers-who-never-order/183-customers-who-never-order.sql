# Write your MySQL query statement below

# select Customers.name as Customers
# from Customers
# where Customers.id NOT IN
# (
#   SELECT customerId from Orders  
# );



select customers.name as customers
from customers
where customers.id not in
(
select customerid from orders 
);


# SELECT Customers.name AS Customers 
# FROM Customers
# WHERE Customers.id NOT IN 
# (
#    SELECT customerId from Orders
# );