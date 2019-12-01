Date:  30/11/2019.

Fecha: 30/11/2019.

Title: Tutor.

Título: Tutor.

URL: docs.tutor.overhang.io

Category: e-learning.

Categoría: e-learning.

Description: Tutor is a docker-based Open edX distribution, both for production and local development. The goal of Tutor is to make it easy to deploy, customize, upgrade and scale Open edX.

Descripción: Tutor es una distribución de Open edX basada en Docker, tanto para producción como para desarrollo local. La meta de Tutor es hacer fácil el despliegue, customización, actualización y escalamiento de Open edX.

.. image:: https://gitlab.com/constrict0r/observatory/raw/master/img/tutor.png
   :alt: tutor

Installation:

.. code-block:: bash

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

.. code-block:: bash

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

 .. code-block:: bash

  tutor local quickstart => Construct a new tutor.
  tutor config printfoot => Prints tutor configuration path.
  cat "$(tutor config printroot)/config.yml" => Prints tutor configuration.

Comandos:

 .. code-block:: bash

  tutor local quickstart => Construye un nuevo tutor.
  tutor config printfoot => Imprime la ruta a la configuración de tutor.
  cat "$(tutor config printroot)/config.yml" => Imprime la config de tutor.

Pros:

- It's a really cool software.

- Easy to install (via docker).

- Great if you're gonna manage courses.

Pros:

- Es realmente un software genial.

- Fácil de instalar (via docker).

- Grandioso si vas a manejar cursos.

Cons:

- Too big for small projects: it includes mysql, mongodb, rabbitmq, nginx,
  elastix-search, smtp, django and reactjs.

Contras:

- Muy grande para pequeños proyectos: incluye mysql, mongodb, rabbitmq, nginx,
  elastix-search, smtp, django y reactjs.
