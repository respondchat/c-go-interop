package main

import "C"
import (
	"fmt"
	"math"
	"net/http"
	"sync"
	"time"
)

//export Sqrt
func Sqrt(n float64) float64 {
	return math.Sqrt(n)
}

//export Pow
func Pow(x float64, y float64) float64 {
	return math.Pow(x, y)
}

//export Request
func Request(str string) int {
	client := http.Client{
		Timeout: time.Millisecond * 200,
	}
	resp, _ := client.Get(str)
	return resp.StatusCode
}

//export Routines
func Routines(n int) {
	wg := sync.WaitGroup{}
	for i := range n {
		wg.Add(1)
		fmt.Printf("Spawning go routine %d\n", i)
		go func() {
			defer wg.Done()
			time.Sleep(time.Millisecond * 10)
		}()
	}
	wg.Wait()
}

func main() {}
