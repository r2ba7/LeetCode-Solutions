# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
DELETE c1 FROM Person c1
INNER JOIN Person c2 
WHERE
    c1.id > c2.id AND 
    c1.email = c2.email;
