import random

# Список простых фраз
messages = [
    "Привет, мир! Код работает.",
    "Сегодня отличный день для коммита.",
    "Случайное число на сегодня: ",
    "Ошибка не баг, а фича."
]

# Выбираем случайную фразу
chosen = random.choice(messages)
number = random.randint(1, 100)

print(chosen, number)
