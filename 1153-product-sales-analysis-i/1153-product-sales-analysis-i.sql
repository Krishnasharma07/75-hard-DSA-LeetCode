# Write your MySQL query statement below
select product_name,year,price from Sales, Product 
where sales.product_id = product.product_id;