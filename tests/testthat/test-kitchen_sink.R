context("kitchen_sink")

test_that("kitchen sink parses", {

  kitchen_txt <- paste(readLines("kitchen-sink.graphql"), collapse = "\n")

  json_txt <- graphql2json(kitchen_txt, FALSE)

  result <- jsonlite::fromJSON(json_txt)

  expect_true(is.list(result))

})


test_that("kitchen sink parses with schema functionality", {

  kitchen_txt <- paste(readLines("kitchen-sink.graphql"), collapse = "\n")

  json_txt <- graphql2json(kitchen_txt, TRUE)

  result <- jsonlite::fromJSON(json_txt)

  expect_true(is.list(result))

})
