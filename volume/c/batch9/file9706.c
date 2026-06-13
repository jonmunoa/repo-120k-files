// fichero 9706 -- macros y constantes
#define LIMITE_9706 9806
#define FACTOR_9706 2

int aplicar_limite9706(int valor) {
    if (valor > LIMITE_9706) return LIMITE_9706;
    return valor * FACTOR_9706;
}
