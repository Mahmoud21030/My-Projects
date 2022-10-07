SELECT  title FROM movies JOIN (stars JOIN people ON stars.person_id = people.id) ON movies.id = stars.movie_id
WHERE people.name = "Johnny Depp" OR people.name = "Helena Bonham";