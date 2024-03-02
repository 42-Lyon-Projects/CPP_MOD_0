
> **L'exercice 01 consiste à créer un carnet d'adresses en C++, où vous pouvez ajouter, afficher des contacts et quitter.**

L'approche que j'ai utilisé pour implémenter ce carnet d'adresses est le modèle **MVC (Modèle-Vue-Contrôleur)**.

Le MVC est un pattern de conception utilisé dans le développement de logiciels pour séparer les différentes responsabilités de votre application.
Voici comment chaque composants se décompose avec modèle MVC et son rôle dans l'application :

_Modèle (Model)_ : Le modèle représente la logique métier et les données de votre application.
Dans le cas du carnet d'adresses, le modèle stockera les informations sur les contacts, telles que les noms et les numéros de téléphone, ainsi que les opérations pour gérer ces contacts, comme l'ajout, la suppression et la mise à jour.

_Vue (View)_ : La vue est responsable de l'interface utilisateur de votre application. 
Elle affiche les données du modèle à l'utilisateur et réagit aux actions de l'utilisateur, comme par exemple les saisies au clavier ou encore les interactions de souris. 
Dans le cas du carnet d'adresses, la vue affichera la liste des contacts et fournira des moyens pour ajouter des contacts.

_Contrôleur (Controller)_: Le contrôleur agit comme un intermédiaire entre le modèle et la vue. 
Il écoute les actions de l'utilisateur dans la vue, interagit avec le modèle en conséquence et met à jour la vue pour refléter les changements dans le modèle. 
Dans le cas du carnet d'adresses, le contrôleur gère les actions de l'utilisateur, telles que l'ajout d'un contact en interagissant avec le modèle et en mettant à jour la vue en conséquence.

> Voici un schema pour expliquer ce principe :

![image](https://github.com/42-Lyon-Projects/CPP_MOD_0/assets/68877411/b72b7081-b070-423c-aa71-318e31921b8b)
