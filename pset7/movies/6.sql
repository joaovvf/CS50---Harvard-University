SELECT AVG(rating)
FROM ratings JOIN ratings ON movies.id = ratings.movie_id
where year = 2012;