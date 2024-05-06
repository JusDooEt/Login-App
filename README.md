# Login Form Template
## About
This program is meant to be a template for a login page to use for other applications that require this level of security before a user can access the full application. This program was also used to practice using a database in order to store data like usernames, emails and passwords. The window will use this database in order to verify a user's login credentials. There is also an option to register a new user that will insert the new user's data into the database and allow them to login after a successful registration.


## Build Image
![image](https://github.com/JusDooEt/Login-App/assets/152052216/4c94a5a3-f79f-4bc2-b9f7-1ddb15478000)


## Console Output
```
Database Connected
User:  "perub"
Email:  "ericb@yahoo.com"
Registered in the database
Register Dialog closed
```

## Registering a new user
![image](https://github.com/JusDooEt/Login-App/assets/152052216/74513334-8b0f-4ca3-bc3c-eb36fcd00776)
![image](https://github.com/JusDooEt/Login-App/assets/152052216/223956c6-c82c-4773-bdaf-7d2927fcdd2f)

The Register button will show a new window above the main login window. This window will prompt the user to enter a username, email, password, and password confirmation. The program will check if the username and email already exists in the database. If it already exists the user will not be able to register and the program will warn the user which value is invalid below the input text boxes. The cancel button will close the window and none of the data entered will be saved. The register button will verify the new username, email, and password and enter the data into the database. If the values are not valid when the register button is pressed then a dialog box will popup warning the user to check their information. 

## To-Do
- [ ] Create a function to verify a user's login information.
  - [ ] This function will create a SQLITE query requesting data matching the username and password input by the user when the login button is clicked.
  - [ ] If the username or password cannot be found in the database access will be denied and a message box should popup indicating the user login has failed.
  - [ ] This function can be more specific when alerting the user of a login failure by stating whether the username or password was not found.
- [ ] Add a window to execute after a successful login.

