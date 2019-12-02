
observatory
***********

.. image:: https://readthedocs.org/projects/observatory/badge
   :alt: readthedocs

Software Observatory of Doom.

You better readme on `readthedocs
<https://observatory.readthedocs.io/en/latest/>`_.

Source code on `Gitlab repository
<https://gitlab.com/constrict0r/observatory>`_.


observatorio
************

.. image:: https://readthedocs.org/projects/observatory/badge
   :alt: readthedocs

Observatorio de Software de Doom.

Mejor léeme en `readthedocs
<https://observatory.readthedocs.io/en/latest/>`_.

Código fuente en `Gitlab repository
<https://gitlab.com/constrict0r/observatory>`_.


Contents
********

* `Description <#Description>`_
* `Descripción <#descripcion>`_
* `License <#License>`_
* `Licencia <#licencia>`_
* `Links <#Links>`_
* `Enlaces <#enlaces>`_
* `Author <#Author>`_
* `Autor <#autor>`_
* `Sotware <#Sotware>`_
   * `Moodle <#moodle>`_
   * `Open edX <#open-edx>`_
   * `Pencil Project <#pencil-project>`_
   * `Swagger Editor <#swagger-editor>`_
   * `Tutor <#tutor>`_

Description
***********

The Madvillain Software Observatory.

The intent is to evaluate software options for different tasks.


Descripción
***********

El Observatorio de Software del Malvado Villano.

La intención es evaluar opciones de software para diferentes tareas.


License
*******

MIT. See the LICENSE file for more details.


Licencia
********

MIT. Vea el archivo de LICENSE para más detalles.


Links
*****

`Gitlab repository <https://gitlab.com/constrict0r/observatory>`_


Enlaces
*******

`Gitlab repository <https://gitlab.com/constrict0r/observatory>`_


Author
******

.. image:: https://gitlab.com//constrict0r///observatory//raw/master/img/author.png
   :alt: author

The travelling vaudeville villain.


Autor
*****

.. image:: https://gitlab.com//constrict0r///observatory//raw/master/img/author.png
   :alt: author

The travelling vaudeville villain.


Sotware
*******


Moodle
======

Date:  01/01/2019.

Fecha: 01/01/2019.

Title:  moodle.

Título: moodle.

URL: `moodle.org <https://moodle.org>`_. `bitnami github image
<https://github.com/bitnami/bitnami-docker-moodle>`_.

Category:  e-learning.

Categoría: e-learning.

Description: Handle courses, teachers and students.

Descripción: Maneja cursos, profesores y estudiantes

.. image:: https://gitlab.com//constrict0r///observatory//raw/master/img/moodle.png
   :alt: moodle

Installation:

::

   sudo apt install docker docker-compose -y
   # Check if there are any associated docker volume.
   docker volume ls
   # And delete it if necessary.
   docker volume rm volume_id
   curl -sSL https://raw.githubusercontent.com/bitnami/bitnami-docker-moodle/master/docker-compose.yml > docker-compose.yml
   docker-compose up -d
   visit 127.0.0.1

Instalación:

::

   sudo apt install docker docker-compose -y
   # Verifique si existe algún volumen asociado con el contenedor.
   docker volume ls
   # Y borrélo si es necesario.
   docker volume rm volume_id
   curl -sSL https://raw.githubusercontent.com/bitnami/bitnami-docker-moodle/master/docker-compose.yml > docker-compose.yml
   docker-compose up -d
   visite 127.0.0.1

Commands:

::

   docker-compose up => Construct the moodle application.
   docker volume ls => List docker volumens.
   docker ps -a => List docker containers.
   docker image ls => List docker images.
   docker stop $(docker ps -a -q) => Stop all docker containers.
   docker rm $(docker ps -a -q) => Remove all docker containers.
   docker volume rm volume_id => Remove the volume with id volume_id.

Comandos:

::

   docker-compose up => Construye la aplicación moodle.
   docker volume ls => Lista todos los vólumenes docker.
   docker ps -a => Lista todos los contendores docker.
   docker image ls => List todas las imágenes docker.
   docker stop $(docker ps -a -q) => Detiene todos los contenedores.
   docker rm $(docker ps -a -q) => Borra todos los contenedores.
   docker volume rm volumen_id => Borra el volumen con el id volumen_id.

Pros:
   * Easy to install.

   * Light.

Pros:
   * Fácil de instalar.

   * Ligero.

Cons:
   * The GUI feels a little messy.

Contras:
   * Interfaz un poco desordenada.


Open edX
========

Date:  30/11/2019.

Fecha: 30/11/2019.

Title:  Open edX.

Título: Open edX.

URL: `open.edx.org <https://open.edx.org/>`_.

Category:  e-learning.

Categoría: e-learning.

Description: E-learning software platform, collaboration between
multiple USA universities.

Descripción: Software para e-learning, una colaboración entre
múltiples universidades estadounidenses.

.. image:: https://gitlab.com//constrict0r///observatory//raw/master/img/open-edx.png
   :alt: open-edx

Notes: See the “tutor” software for more details.

Notas: Vea el software “tutor” para más detalles.


Pencil Project
==============

Date:  01/12/2019.

Fecha: 01/12/2019.

Title:  Pencil Project.

Título: Pencil Project.

URL: `pencil.evolus.vn <https://pencil.evolus.vn>`_.

Category: design.

Categoría: diseño.

Description: Wireframes design tool.

Descripción: Herramienta de diseño de wireframes.

.. image:: https://gitlab.com//constrict0r///observatory//raw/master/img/pencil.png
   :alt: pencil

Installation:

::

   wget https://pencil.evolus.vn/dl/development/pencil_3.1.0.20191202003002_amd64.deb
   sudo dpkg -i ~/Descargas/pencil_3.1.0.20191202003002_amd64.deb
   sudo chmod 4755 chrome-sandbox

Instalación:

::

   wget https://pencil.evolus.vn/dl/development/pencil_3.1.0.20191202003002_amd64.deb
   sudo dpkg -i ~/Descargas/pencil_3.1.0.20191202003002_amd64.deb
   sudo chmod 4755 chrome-sandbox

Commands:

::

   pencil => Executes pencil.

Comandos:

::

   pencil => Ejecuta pencil.

Pros:
   * Easy to use.

   * Rapid prototiping.

   * Exports to different formats including html + css + js.

   * The quality of the html + css + js generated code is decent.

Pros:
   * Fácil de usar.

   * Prototipado rápido.

   * Exporta a diferentes formatos incluido html + css + js.

   * La calidad de html + css + js es aceptable.

Cons:
   * Hard to install (Buster crashes installing with stable release,
      works fine with nightly build)

   * On the downloads page says - “the Firefox extension bases on an
      older version of Pencil which is no longer in active
      development”. Gives 404 error.

   * Must install the ‘Generic Wireframe set of figures/objects’ to
      have a decent set of forms to work with.

   * By default, when exporting to an html prototype, the background
      color must always be manually set to #FFF (white).

   * When creating a new page if you don’t put a solid color (as
      white), you cannot change it later.

Contras:
   * Díficil de instalar (En Buster se cae instalando con versión
      oficial, la versión ‘nigthly build’ funciona bien).

   * En la página de descargas dice: “the Firefox extension bases on
      an older version of Pencil which is no longer in active
      development”. Da error 404.

   * Se debe instalar el ‘Conjunto génerico de figuras/objetos para
      wireframes’ para tener un conjunto decente de formas con las
      cuales trabajar.

   * De manera predeterminada, cuando se exporta a un prototipo html,
      el color de fondo siempre debe de ponerse a mano como #FFF
      (blanco).

   * Cuando se crea una nueva página, si no pones un color sólido
      (como blanco), no puedes cambiarlo luego.


Swagger Editor
==============

Date:  30/11/2019.

Fecha: 30/11/2019.

Title:  swagger-editor.

Título: swagger-editor.

URL: `swagger-editor
<https://swagger.io/docs/open-source-tools/swagger-editor>`_.

Category: editors.

Categoría: editores.

Description: Openapi web editor.

Descripción: Editor web para openapi.

.. image:: https://gitlab.com//constrict0r///observatory//raw/master/img/swagger-editor.png
   :alt: swagger-editor

Installation:

::

   sudo apt install -y docker
   docker pull swaggerapi/swagger-editor
   docker run -p 80:8080 swaggerapi/swagger-editor
   visit 127.0.0.1

Instalación:

::

   sudo apt install -y docker
   docker pull swaggerapi/swagger-editor
   docker run -p 80:8080 swaggerapi/swagger-editor
   visite 127.0.0.1


Tutor
=====

Date:  30/11/2019.

Fecha: 30/11/2019.

Title: Tutor.

Título: Tutor.

URL: `docs.tutor.overhang.io <https://docs.tutor.overhang.io>`_.

Category: e-learning.

Categoría: e-learning.

Description: Tutor is a docker-based Open edX distribution, both for
production and local development. The goal of Tutor is to make it easy
to deploy, customize, upgrade and scale Open edX.

Descripción: Tutor es una distribución de Open edX basada en Docker,
tanto para producción como para desarrollo local. La meta de Tutor es
hacer fácil el despliegue, customización, actualización y escalamiento
de Open edX.

.. image:: https://gitlab.com//constrict0r///observatory//raw/master/img/tutor.png
   :alt: tutor

Installation:

::

   sudo apt install curl docker docker-compose libyaml-dev -y
   sudo curl -L "https://github.com/overhangio/tutor/releases/download/v3.8.0/tutor-$(uname -s)_$(uname -m)" -o /usr/local/bin/tutor
   sudo chmod 0755 /usr/local/bin/tutor
   tutor local quickstart
   Your website domain name for students (LMS) [www.myopenedx.com] - myopenedx.com
   Your website domain name for teachers (CMS) [studio.myopenedx.com] - teachers.myopenedx.com
   Your platform name/title [My Open edX] - My Open edX.
   Your public contact email address [contact@myopenedx.com] - contact@myopenedx.com
   The default language code for the platform [en] - es-mx
   Activate SSL/TLS certificates for HTTPS access? Important note, this will NOT work in a development environment. [y/N] > - n
   tutor local createuser --staff --superuser username contact@myopenedx.com => Create admin user.

Instalación:

::

   sudo apt-get install curl docker docker-compose libyaml-dev -y
   sudo curl -L "https://github.com/overhangio/tutor/releases/download/v3.8.0/tutor-$(uname -s)_$(uname -m)" -o /usr/local/bin/tutor
   sudo chmod 0755 /usr/local/bin/tutor
   tutor local quickstart
   Your website domain name for students (LMS) [www.myopenedx.com] - localhost
   Your website domain name for teachers (CMS) [studio.myopenedx.com] - localhost
   Your platform name/title [My Open edX] - My Open edX.
   Your public contact email address [contact@myopenedx.com] - contact@myopenedx.com
   The default language code for the platform [en] - es-mx
   Activate SSL/TLS certificates for HTTPS access? Important note, this will NOT work in a development environment. [y/N] > - n
   tutor local createuser --staff --superuser username contact@myopenedx.com => Crear el usuario administrador.

Commands:

..

   ::

      tutor local quickstart => Construct a new tutor.
      tutor config printfoot => Prints tutor configuration path.
      cat "$(tutor config printroot)/config.yml" => Prints tutor configuration.

Comandos:

..

   ::

      tutor local quickstart => Construye un nuevo tutor.
      tutor config printfoot => Imprime la ruta a la configuración de tutor.
      cat "$(tutor config printroot)/config.yml" => Imprime la config de tutor.

Pros:

* It’s a really cool software.

* Easy to install (via docker).

* Great if you’re gonna manage courses.

Pros:

* Es realmente un software genial.

* Fácil de instalar (via docker).

* Grandioso si vas a manejar cursos.

Cons:

* Too big for small projects: it includes mysql, mongodb, rabbitmq,
   nginx, elastix-search, smtp, django and reactjs.

Contras:

* Muy grande para pequeños proyectos: incluye mysql, mongodb,
   rabbitmq, nginx, elastix-search, smtp, django y reactjs.

