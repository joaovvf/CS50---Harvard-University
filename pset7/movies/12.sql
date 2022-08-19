SELECT title
FROM people JOINS stars ON stars.person_id = people.id
JOIN movies ON stars.movies_id = movies.id
WHERE name = "Johnny Depp"
AND movie_id IN (
    SELECT movie_id
    FROM people JOIN stars ON stars.person_id = people.id
    WHERE name = 'Helena Boham Carter'
);