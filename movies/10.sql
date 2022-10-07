SELECT  DISTINCT(name)  FROM movies JOIN (directors JOIN people ON directors.person_id = people.id) ON movies.id = directors.movie_id
WHERE id IN (SELECT movie_id FROM ratings WHERE  rating > 9);