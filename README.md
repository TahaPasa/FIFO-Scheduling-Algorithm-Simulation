# FIFO Scheduling Algorithm Simulation

This project is a simulation of the FIFO (First In First Out) scheduling algorithm for processes, written in C++. The simulation ignores the process switching time and generates random arrival and service times for the processes.

## Requirements

- The number of processes must be entered from the keyboard (minimum: 3, maximum: 10).
- Arrival times (Ta) of the processes are randomly generated (minimum: 0, maximum: 20).
- Service times (Ts) of the processes are randomly generated (minimum: 5, maximum: 25).
- The schedule is printed by indicating which process runs in which time interval.


## Note

AI designing this code as O(nlogn) complexity while mine is O(n^2) but it uses structs and vectors.


## Example Output

```sh
Enter the number of processes (3-10): 7
Generating random arrival (Ta) and service (Ts) times:
   Ta Ts
P1 6 12
P2 19 15
P3 13 7
P4 20 9
P5 4 25
P6 0 11
P7 15 20
----------------
Scheduling using FIFO:
T =  0 -> 11 : P6
T = 11 -> 36 : P5
T = 36 -> 48 : P1
T = 48 -> 55 : P3
T = 55 -> 75 : P7
T = 75 -> 90 : P2
T = 90 -> 99 : P4
```

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License

[MIT](https://choosealicense.com/licenses/mit/)
