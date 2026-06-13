// fichero 9926 -- macros y constantes
#define LIMITE_9926 10026
#define FACTOR_9926 2

int aplicar_limite9926(int valor) {
    if (valor > LIMITE_9926) return LIMITE_9926;
    return valor * FACTOR_9926;
}
