Instructions on how to run the web application. I did it on a Mac, so I have written the instructions according to a Mac:

Open a terminal window on your Mac.
Navigate to the root directory of the Django project using the cd command. For example, the project is in a folder named Section2 in folder assignment you would run:
		cd Desktop/assignment/Section2
Activate virtual environment if you are using any(I used a virtual environment while making the web app)
Install required dependencies by running
	pip install numpy(and)pytz(and)psutil
	pip install django-crispy-forms
	pip install crispy-bootstrap4
	pip install bootstrap4
	pip install Pillow	
Run database migrations by running:
	python manage.py migrate
Finally start the development server by running:
	python manage.py runserver	
This will start the Django development server, and you should see output indicating that the server is running.
Open a web browser and visit http://localhost:8000/ to access the Django web application.That's it! The Django web application should now be running locally on your Mac. Remember to keep the terminal window open while testing or developing your application.
