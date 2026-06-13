// fichero 9390 -- macros y constantes
#define LIMITE_9390 9490
#define FACTOR_9390 1

int aplicar_limite9390(int valor) {
    if (valor > LIMITE_9390) return LIMITE_9390;
    return valor * FACTOR_9390;
}
