1. List all courses.name and teachers.name


SELECT name
FROM courses;
SELECT name
FROM teachers;


2.List teachers who take the height number of courses


SELECT t.name
FROM courses as c JOIN teachers as t
ON (c.teachers_id = t.id)
GROUP BY c.teachers_id
HAVING COUNT(c.teachers_id)=(
SELECT COUNT(teachers_id) as cnt FROM course GROUP BY teachers_id
HAVING cnt= (SELECT COUNT(teachers_id) as cnt FROM course GROUP BY teachers_id
               ORDER BY cnt DESC LIMIT 1));


3.List teachers who don't take course

SELECT name
FROM teachers
WHERE NOT name=  ANY(SELECT t.name
FROM courses as c JOIN teachers as t
ON (c.teachers_id = t.id))
