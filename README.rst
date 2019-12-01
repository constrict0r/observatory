
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
   * `Open edX <#open-edx>`_
   * `Tutor <#tutor>`_

Description
***********

The Madvillain Software Observatory.

The intent is to evaluate software options for different tasks.


Descripción
***********

El Observatorio de Software del Malvado Villano.

La intención es evaluar software para diferentes tareas.


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


Open edX
========

Date:  30/11/2019.

Fecha: 30/11/2019.

Title:  Open edX.

Título: Open edX.

URL: open.edx.org.

Description: E-learning software platform, collaboration between
multiple USA universities.

Descripción: Software para e-learning, una colaboración entre
múltiples universidades estadounidenses.

Notes: See the “tutor” software for more details.

Notas: Vea el software “tutor” para más detalles.


Tutor
=====

Date:  30/11/2019.

Fecha: 30/11/2019.

Title: Tutor.

Título: Tutor.

URL: docs.tutor.overhang.io

Description: Tutor is a docker-based Open edX distribution, both for
production and local development. The goal of Tutor is to make it easy
to deploy, customize, upgrade and scale Open edX.

Descripción: Tutor es una distribución de Open edX basada en Docker,
tanto para producción como para desarrollo local. La meta de Tutor es
hacer fácil el despliegue, customización, actualización y escalamiento
de Open edX.

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

