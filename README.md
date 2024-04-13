# CGO interop

## Running the example

### Manually

1. Build the go library via:

```terminal
$ go build -buildmode=c-archive -o lib.a lib.go
```

2. Build and run the c++ entrypoint with

```terminal
$ g++ -Wall main.cpp lib.a -o main && ./main
```

### Via make

```
make example
```
