// fichero 9170 -- macros y constantes
#define LIMITE_9170 9270
#define FACTOR_9170 1

int aplicar_limite9170(int valor) {
    if (valor > LIMITE_9170) return LIMITE_9170;
    return valor * FACTOR_9170;
}
