
-- problem link: https://leetcode.com/problems/rank-scores/description/

SELECT score,
    DENSE_RANK() OVER(Order By score desc) as "rank" -- Dense Rank will will genereate unic number which will apply OVER Clause
    FROM Scores;