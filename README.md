# C/C++ Labs

***
## MyTask3

### Задание 1.
 Разработайте программу с циклическим вводом целых двузначных
чисел, до тех пор, пока число введенных отрицательных не станет больше
трех. После ввода чисел выводите их в шестнадцатеричном виде.

### Задание 2.
 При помощи библиотеки CMath и стандартных математических
функций решите уравнение.

### Задание 3.
 Используя потоковый вывод и манипуляторы, напишите программу
для вывода на консоль крестообразной (как знак +) области заполненной
каким-либо одним символом.
***
## MyTask4

Каждый пункт задания реализовать в виде функции в отдельном модуле
(файле). Подключить все созданные файлы к основному файлу программы и
при помощи оператора switch организовать выбор воспроизводимого задания
в зависимости от вводимого пользователем числа (например, 1, 2, 3). Блок
switch должен быть зациклен, условием выхода из программы должно быть
введенное пользователем число -1.

### Задание 1.
С клавиатуры вводится четырехзначное натуральное число. Необходимо
проверить, являются ли все цифры в нем одинаковыми (1111, 2222 и т.п.)

### Задание 2.
Реализовать функцию для вывода на консоль значений синусов всех
углов от 0° до 360° с шагом в 15°.

### Задание 3.1.
Необходимо вычислить сумму ряда с точностью e=10-6, вывести
результат и количество полученных слагаемых. Требуемую точность считать
достигнутой, если очередное слагаемое по модулю меньше точности e. Число
x пользователь вводит с клавиатуры. x должно быть числом с плавающей
точкой на интервале от 0 до 1.
### Задание 3.2.
В каком-нибудь редакторе начертить блок-схему алгоритма из
предыдущего задания. Можно использовать любые редакторы схем,
например, онлайн редакторы. Для этих целей можно воспользоваться
сервисами https://go.gliffy.com/go/html5/launch, https://www.draw.io, или
другим подобным. Если на компьютере установлен Microsoft Visio, можно
использовать и его.

### Задание 4.
Необходимо найти, вывести на консоль и подсчитать количество всех
простых чисел, не превосходящих заданного N>0, которое вводит
пользователь.
***
## MyTask5

### Задача 0.
Задан произвольный статический массив. Необходимо поменять
местами нулевой и минимальный элементы массива.

### Задача 1.
Сформируйте массив целых чисел путем ввода пользователем значений.
Все четные элементы массива поместить в массив L, а нечетные — в массив
М. Подсчитать количество тех и других.

### Задача 2.
Необходимо сформировать одномерный статический массив целых
чисел, используя генератор случайных чисел (функция rand()) значениями от
-20 до 20. Затем удалить из массива все элементы, превышающие 8.
Дополнительно:
Для каждого положительного элемента массива определить, есть ли в
массиве отрицательный элемент с противоположным значением; если да,
заменить эти элементы на 0.

### Задача 3 (со звёздочкой).
Создайте массив размера в 100 элементов. Заполните его случайными
числами от -50 до 50. Во всех последовательностях отрицательных чисел
удалите элементы, абсолютное значение которых превышает абсолютное
среднее значение для этой последовательности.
***
## MyTask6

Выполните все пункты предыдущего задания, используя указатели,
отказавшись от индексов, и используя операторы динамического выделения
памяти new и delete.
***
## MyTask7

### Задача 1.
Написать программу, которая будет удалять в строке все символы, не
являющиеся буквами, цифрами или символом пробела, и заменять каждую
заглавную букву одноименной малой.

### Задача 2.
Написать программу, реализующую функцию вставки подстроки S1 длиной k
в строку S с позиции номер n.

### Задача 3.
Дана строка, содержащая полное имя файла. Выделить из строки название
последнего каталога (без символов "\").
***
## MyTask8

### Задача 1.
Скопировать из файла F1 в файл F2 строки, начиная с N до K.
Подсчитать количество согласных букв в файле F2.

### Задача 2.
Программа должна проверить в открытом файле количество открывающихся
и закрывающихся скобок (всех видов). В случае, если количество
открывающихся скобок не равно количеству закрывающихся, в конец файла
report.txt (если такого файла не существует при первом обращении,
необходимо создать его) записать информацию об отсутствии той или иной
скобки.

### Задача 3(сложная).
Программа должна постоянно ожидать ввода пользователя. После ввода
необходимо проанализировать введенную строку, если эта строка
подразумевает приветствие (имеется подстрока «прив», «здрав»), вывести
пользователю приветствие в ответ. Если пользователь спрашивает сколько
времени, выдать текущее системное время. Когда пользователь прощается,
программа должна попрощаться и закончить свою работу.
Диалог пользователя и программы должен записываться в файл с указанием
времени каждого сообщения.
***
## MyTask9

### Задача 1.
Написать программу, которая при помощи стека из библиотеки STL будет
переворачивать введенную строку задом наперед, сохраняя в тот же массив.

### Задача 2(двухстековый алгоритм Дейкстры).
Пользователь должен поочередно вводить операнды и символы операций на
манер калькулятора, до тех пор, пока не введет точку. Каждый ввод должен
добавляться в очередь из STL. После завершения ввода нужно извлекать
записи из очереди и выполнять соответствующие арифметические действия,
после чего вывести результат.
Пример ввода: 14+53-23+44*2-10.

### Задача 3.
Реализовать самим через объявление struct и указатели динамическую
структура двусвязного списка. Продемонстрировать добавление новых
элементов и удаление старых, как на концах списка, так и в середине. 

***
## MyTask10

### Задача 1.
Написать программу, выводящую на консоль три разных символа (R, G, B),
разного цвета. Символы должны мигать с различной частотой, т.е.
перезаписываться символом пробела. Частоту задать произвольно, при
помощи функции Sleep(). Для вывода каждого символа использовать
отдельный поток (функции WinAPI). Для установки позиции ввода в консоли
использовать специальные функции. При необходимости предусмотреть
механизм синхронизации доступа к консоли с помощью критических секций (всё из WinAPI).

### Задача 2.
Программа должна ожидать ввода пользователем числа. После
ввода каждого числа должен создаваться отдельный поток с заполнением
символами случайного цвета строки консоли под введенным номером. Строка
заполняется слева направо символами (любой символ) с интервалом в 300 мс. Т.е. если
вводится 10 – в параллельном режиме должно начаться заполнение десятой
строки консоли, от начала и до конца. Предусмотреть синхронизацию доступа
разных потоков к консоли.
