SELECT title , rating From movies JOIN ratings ON movies.id = ratings.movie_id ORDER BY rating DESC,title  ;