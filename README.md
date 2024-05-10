# Login Form Template

## Newest Updates - Adding and removing items from a user's cart
![image](https://github.com/JusDooEt/Login-App/assets/152052216/fcdddab4-811b-4e76-bf92-1d987d75a3a8)
![image](https://github.com/JusDooEt/Login-App/assets/152052216/604de97f-9886-40d9-9c14-ff69c79920e6)

- Logging in will take the user to the cart window where they can view the items they currently have in their cart.
  - The user will only see items that are associated with their unique username.  
  - Items will be saved even after the program closes since it uses a database to store information.
  - The user can add items to the cart by clicking the '+' button.
    - This will open a dialog prompting the user to enter the name, price and quantity of the item being added to the cart.
    - Confirming this addition will refresh the list.
  - The user can delete specific items from their cart or clear the list entirely.
    - In order to delete a specific item, the user must first click an item in the cart and then click the '-' button.
    - The cart will be refreshed.
- Logging in can be executed by hitting the return key when the password text edit is selected. (Quality of life change)
## About
This program is meant to be a template for a login page to use for other applications that require this level of security before a user can access the full application. This program was also used to practice using a database in order to store data like usernames, emails and passwords. The window will use this database in order to verify a user's login credentials. There is also an option to register a new user that will insert the new user's data into the database and allow them to login after a successful registration.


## Build Image
![image](https://github.com/JusDooEt/Login-App/assets/152052216/4c94a5a3-f79f-4bc2-b9f7-1ddb15478000)
![image](https://github.com/JusDooEt/Login-App/assets/152052216/78e34496-cae9-4ca9-b974-4bce9bb0c3ea)
![image](https://github.com/JusDooEt/Login-App/assets/152052216/b2160c0d-d64d-4e0d-9da8-735368c265e7)
![image](https://github.com/JusDooEt/Login-App/assets/152052216/5fab2f13-ee6d-402d-9782-f580f39ce06b)


## Console Output
```
Database Connected
User:  "perub"
Email:  "ericb@yahoo.com"
Registered in the database
Register Dialog closed
```
## Logging in
- A user can now login using the username and password they registered with.
  - This is done by creating a SQL query to search for the username and password input in the text fields within the programs database of registered users.
  - If the username and password is found in the same data row then the user will be prompted to the next window of the application.
  - If a match for the username, password, or both can not be found then a message window will popup informing the user that their login failed and to check their username and password.
 
  
## Registering a new user
![image](https://github.com/JusDooEt/Login-App/assets/152052216/74513334-8b0f-4ca3-bc3c-eb36fcd00776)
![image](https://github.com/JusDooEt/Login-App/assets/152052216/223956c6-c82c-4773-bdaf-7d2927fcdd2f)

- The Register button will show a new window above the main login window.
  - This window will prompt the user to enter a username, email, password, and password confirmation.
  - The program will check if the username and email already exists in the database.
    - If it already exists the user will not be able to register and the program will warn the user which value is invalid below the input text boxes.
  - The cancel button will close the window and none of the data entered will be saved.
  - The register button will verify the new username, email, and password and enter the data into the database.
    - If the values are not valid when the register button is pressed then a dialog box will popup warning the user to check their information. 



## To-Do
- [x] Create a function to verify a user's login information.
  - [x] This function will create a SQLITE query requesting data matching the username and password input by the user when the login button is clicked.
  - [x] If the username or password cannot be found in the database access will be denied and a message box should popup indicating the user login has failed.
  - [ ] This function can be more specific when alerting the user of a login failure by stating whether the username or password was not found.
- [x] Add a window to execute after a successful login.
  - [x] Add functionality to this window to practice linking tables in the SQL database.
  - [x] Link the user table to an item table and allow users to add items to their "cart".





