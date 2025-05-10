

-- problem link: https://leetcode.com/problems/employees-earning-more-than-their-managers/description/

 -- objective : determine those employees who get more salaries then their manager


 
Select
    E.name as Employee
   
    from Employee as M
    right join Employee as E
        on E.managerId = M.Id
        where E.salary > M.salary;