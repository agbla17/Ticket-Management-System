# Ticket Management System 🎟️

A simple console-based **train ticket booking system** implemented in C using **linked lists and priority-aware insertion** to model a basic priority queue.

## ✨ Features
- Book tickets for stations on the Harbour Line (sample dataset)
- Choose between **First Class (priority = 1)** and **Second Class (priority = 2)**
- **Dynamic fare** based on destination and class
- **Return ticket** option (auto fare doubling)
- Tickets stored in a priority-sorted list (First Class handled first)
- Print all booked tickets at the end, sorted by priority

## 🧰 Tech Stack
- **Language:** C
- **Data Structures:** Singly Linked List (priority-based insertion)

## 🏃‍♀️‍➡️ How to Run

### Using `gcc`
```bash
gcc ticket.c -o ticket
./ticket
```

### Using `make`
```bash
make
./ticket
```

> If `make` is not installed on your system, use the `gcc` instructions above.

## 🧬Repository Structure
```
.
├── LICENSE
├── Makefile
├── README.md
└── ticket.c
```

## Next Steps 
- Add input validation, free all nodes before exit, and handle more destination slabs
- Write unit tests for fare computation
- Add a GIF/screenshot of a sample run in the README

## 📝 License
MIT — see [LICENSE](./LICENSE) for details.
