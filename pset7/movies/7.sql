SELECT title, rating
FROM movies JOIN ratings ON movies.id = ratings.movies_id
WHERE year = 2010
ORDER BY rating DESC, title;