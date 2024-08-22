# Vending Machine GUI

Welcome to the **Vending Machine GUI** project! This program simulates a vending machine using a command-line interface in C++. The vending machine allows users to insert money, select a soda, and receive change or a refund if necessary.

## Features
- **Money Insertion:** Users can input money and the machine keeps track of the total amount entered.
- **Soda Selection:** Users can choose between different sodas (Coke or Sprite).
- **Inventory Management:** The machine checks if the selected soda is in stock before dispensing.
- **Change Calculation:** If the total money entered exceeds the cost of the soda, the machine returns the correct change.
- **Refund Option:** Users can choose to get a refund if they decide not to purchase a soda or if the soda is out of stock.

## How the Program Works
1. **Enter Money:**
   - The user is prompted to enter money. The machine tracks the total amount entered.
   - If the total amount reaches or exceeds the soda cost (75 cents), the user can proceed to select a soda.

2. **Select Soda:**
   - The user can choose between two sodas:
     - Coke
     - Sprite
   - If the selected soda is out of stock, the user is prompted to choose another option or get a refund.

3. **Dispense Soda:**
   - If the soda is available, the machine dispenses it and resets the total money and change.
   - If there is any change due, it is returned to the user.

4. **Return Money:**
   - The user can opt to return their money at any point before selecting a soda.
   - The machine returns the amount entered if no purchase is made.

## Program Flow
The program operates in a loop with different states:
1. **ENTER$**: The user enters money.
2. **WAITSEL**: The user selects a soda.
3. **CHECKINV**: The machine checks the inventory and dispenses the selected soda.
4. **RETURN**: The machine returns the money if requested by the user.

## Example Usage
```bash
Enter amount of money or enter 3 to return: 50
Enter amount of money or enter 3 to return: 25
Change is: 0
Enter soda type (1 for coke, 2 for sprite or 3 to return money): 1
Soda selected: coke
Coke dispensed
