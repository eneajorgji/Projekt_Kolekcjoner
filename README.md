# Kolekcjoner
# Treść projektu
Opracowanie bazy danych (własny silnik) służącej do przechowywania informacji o swobodnie definiowanych obiektach, które posiadamy w domu (książki, płyty CD i DVD, kolekcja figurek porcelanowych, itp.) w postaci biblioteki (np. jak SQLLite). System ma umożliwić definiowanie różnych typów przedmiotów (opisywanych przez kilka atrybutów standardowych oraz szereg swobodnie konfigurowalnych) a następnie przechowywać informacje o poszczególnych egzemplarzach. Dla poszczególnych przedmiotów zdefiniowanych może być kilka stanów, których się one znajdują (mam, pożyczone, planowany zakup, ze złomowane, itp.). Oczywiście można dokonywać różnych operacji na rzeczach oraz dokonywać wyszukiwania według określonych kryteriów.

# Wstęp 
Środowisko: Microsoft Visual Studio 2022.

Projekt "Kolekcjoner" składa się z dwóch głównych części: "Kolekcjoner.Client", który zawiera kod odpowiedzialny za graficzny interfejs użytkownika (GUI), oraz "Kolekcjoner.Server", w którym umieszczony jest kod obsługujący bazę danych przechowującą informacje o definiowanych obiektach.

Aplikacja została zaprojektowana dla pojedynczego użytkownika i oferuje trzy interfejsy. Pierwszy interfejs zawiera informacje o aplikacji "Kolekcjoner" oraz opcje "Stwórz Typ" i "Baza".

Przycisk "Stwórz Typ" przenosi użytkownika do interfejsu, w którym może on stworzyć nowy typ obiektu. Z tego miejsca istnieje możliwość powrotu do głównego interfejsu lub przejścia do interfejsu "Baza".

Interfejs "Baza" umożliwia przeglądanie wszystkich rekordów. Użytkownicy mają możliwość edytowania istniejących rekordów, usuwania ich oraz dodawania nowych.

# Przypadki użytku (ang. user cases)
| PU	| Opis | Priorytet | Czasochłonność |
|---|---|---|---|
| PU1 |	Tworzenie nowego typu obiektu; Aktor: Użytkownik; Cel: Użytkownik chce dodać nowy typ obiektu do swojej kolekcji. |	Wysoki	| 8 godzin |
| PU2 |	Dodawanie nowego obiektu do kolekcji; Aktor: Użytkownik; Cel: Użytkownik chce dodać nowy obiekt do swojej kolekcji. |	Wysoki | 7 godzin |
| PU3	| Wyszukiwanie obiektów w kolekcji; Aktor: Użytkownik; Cel: Użytkownik chce znaleźć określone obiekty w swojej kolekcji. | Średni |	7 godzin |
| PU4 |	Edytowanie informacji o obiekcie; Aktor: Użytkownik; Cel: Użytkownik chce zaktualizować informacje o obiekcie w swojej kolekcji. | Średni | 7 godzin |
| PU5 |	Usuwanie obiektu z kolekcji; Aktor: Użytkownik; Cel: Użytkownik chce usunąć obiekt ze swojej kolekcji. | Średni | 3 godzin |

# Podstawowe funkcjonalności 
1. Zarządzanie typami obiektów
2. Zarządzanie kolekcją
   * Dodawanie obiektów
   * Edytowanie obiektów
   * Usuwanie obiektów 
   * Przeglądanie obiektów

#User interfejs
Prototypy interfejsów zostały zaprojektowane za pomocą programu Figma.

![image](https://github.com/eneajorgji/Projekt_Kolekcjoner/assets/16447498/932ce868-e95b-4d9e-9197-96d5613a3e2a)

Rysunek 1. Prototyp interfejsu.

![image](https://github.com/eneajorgji/Projekt_Kolekcjoner/assets/16447498/0f99e33f-f63d-4c76-a95a-29beb053d5e6)

Rysunek 2. Interfejs 1, Kolekcjoner.

![image](https://github.com/eneajorgji/Projekt_Kolekcjoner/assets/16447498/14f85d7c-d861-48f4-8373-d726aa444e5b)

Rysunek 3. Interfejs 2, Stwórz typ.

![image](https://github.com/eneajorgji/Projekt_Kolekcjoner/assets/16447498/73f0597b-d291-451b-89d8-08a327c4d5d8)

Rysunek 4. Interfejs 3, Baza.

# Diagram klas

# Podsumowanie 
Istotnym elementem projektu jest zmiana. Oznacza to, że w trakcie rozwoju niektóre elementy projektu mogą ulec zmianie – np. interfejs czy biblioteki używane. 

# Biblioteki 
Bibliotek standardowe, SQLlite, Qt. 
