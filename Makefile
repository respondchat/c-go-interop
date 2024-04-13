example:
	go build -buildmode=c-archive -o lib.a lib.go
	g++ -Wall main.cpp lib.a -o main
	./main
