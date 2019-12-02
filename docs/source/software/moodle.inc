Date:  01/01/2019.

Fecha: 01/01/2019.

Title:  moodle.

Título: moodle.

URL:
`moodle.org <https://moodle.org>`_.
`bitnami github image <https://github.com/bitnami/bitnami-docker-moodle>`_.

Category:  e-learning.

Categoría: e-learning.

Description: Handle courses, teachers and students.

Descripción: Maneja cursos, profesores y estudiantes

.. image:: https://gitlab.com/constrict0r/observatory/raw/master/img/moodle.png
   :alt: moodle

Installation:

.. code-block:: bash

 sudo apt install docker docker-compose -y
 # Check if there are any associated docker volume.
 docker volume ls
 # And delete it if necessary.
 docker volume rm volume_id
 curl -sSL https://raw.githubusercontent.com/bitnami/bitnami-docker-moodle/master/docker-compose.yml > docker-compose.yml
 docker-compose up -d
 visit 127.0.0.1

Instalación:

.. code-block:: bash

 sudo apt install docker docker-compose -y
 # Verifique si existe algún volumen asociado con el contenedor.
 docker volume ls
 # Y borrélo si es necesario.
 docker volume rm volume_id
 curl -sSL https://raw.githubusercontent.com/bitnami/bitnami-docker-moodle/master/docker-compose.yml > docker-compose.yml
 docker-compose up -d
 visite 127.0.0.1

Commands:

.. code-block:: bash

 docker-compose up => Construct the moodle application.
 docker volume ls => List docker volumens.
 docker ps -a => List docker containers.
 docker image ls => List docker images.
 docker stop $(docker ps -a -q) => Stop all docker containers.
 docker rm $(docker ps -a -q) => Remove all docker containers.
 docker volume rm volume_id => Remove the volume with id volume_id.

Comandos:

.. code-block:: bash

 docker-compose up => Construye la aplicación moodle.
 docker volume ls => Lista todos los vólumenes docker.
 docker ps -a => Lista todos los contendores docker.
 docker image ls => List todas las imágenes docker.
 docker stop $(docker ps -a -q) => Detiene todos los contenedores.
 docker rm $(docker ps -a -q) => Borra todos los contenedores.
 docker volume rm volumen_id => Borra el volumen con el id volumen_id.

Pros:
 - Easy to install.
 - Light.

Pros:
 - Fácil de instalar.
 - Ligero.

Cons:
 - The GUI feels a little messy.

Contras:
 - Interfaz un poco desordenada.
