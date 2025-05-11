
-- problem link: https://leetcode.com/problems/nth-highest-salary/

CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    DECLARE result INT DEFAULT NULL;
    DECLARE offsetValue INT;

    SET offsetValue = N - 1;

    SELECT DISTINCT Salary
    INTO result
    FROM Employee
    ORDER BY Salary DESC
    LIMIT 1 OFFSET offsetValue;

    RETURN result;
END