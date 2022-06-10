/* Write your T-SQL query statement below */
/*PIVOT does not work with oracle and sql server, have to use union and select statements*/

SELECT product_id,store,price
FROM Products
UNPIVOT
(
	price
	FOR store in (store1,store2,store3)
) AS T