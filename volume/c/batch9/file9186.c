// fichero 9186 -- macros y constantes
#define LIMITE_9186 9286
#define FACTOR_9186 2

int aplicar_limite9186(int valor) {
    if (valor > LIMITE_9186) return LIMITE_9186;
    return valor * FACTOR_9186;
}
