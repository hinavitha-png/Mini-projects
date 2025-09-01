# Simple To-Do List

tasks = []

while True:
    print("\n1. Add Task  2. View Tasks  3. Exit")
    choice = input("Choose: ")

    if choice == "1":
        task = input("Enter task: ")
        tasks.append(task)
        print("Task added.")
    elif choice == "2":
        print("Your Tasks:")
        for i, t in enumerate(tasks, 1):
            print(f"{i}. {t}")
    elif choice == "3":
        print("Goodbye!")
        break
    else:
        print("Invalid choice.")
