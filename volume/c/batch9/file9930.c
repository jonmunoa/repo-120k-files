// fichero 9930 -- macros y constantes
#define LIMITE_9930 10030
#define FACTOR_9930 1

int aplicar_limite9930(int valor) {
    if (valor > LIMITE_9930) return LIMITE_9930;
    return valor * FACTOR_9930;
}
