# How to Run the Django Web Application

Follow these steps to set up and run the Django web application on your Mac:

## Prerequisites

- Ensure you have Python installed on your Mac.
- It is recommended to use a virtual environment for dependency management.

## Instructions

1. **Open a Terminal Window**  
   Open a terminal on your Mac.

2. **Navigate to the Project Directory**  
   Use the `cd` command to navigate to the root directory of your Django project. For example, if the project is in a folder named `Section2` inside the `assignment` folder on your desktop, you would run:
   ```bash
   cd Desktop/assignment/Section2

3. Run the following commands to install the necessary dependencies:
   pip install numpy pytz psutil
   pip install django-crispy-forms
   pip install crispy-bootstrap4
   pip install bootstrap4
   pip install Pillow
4. Apply the necessary database migrations by running:
   python manage.py migrate
5. Start the Django development server with the following command:
   python manage.py runserver
6. Open a web browser and visit http://localhost:8000/ to access the Django web application.

Notes:
Keep the terminal window open while testing or developing your application.
For production use, do not use the development server. Instead, configure a production-ready server like Gunicorn or Apache.
