# C++ GO interop

> POC repo for examining calling go code from c++

## Resources

- [go wiki on cgo](https://go.dev/wiki/cgo)
- [cgo command](https://pkg.go.dev/cmd/cgo)

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
