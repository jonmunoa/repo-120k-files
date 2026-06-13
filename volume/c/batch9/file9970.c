// fichero 9970 -- macros y constantes
#define LIMITE_9970 10070
#define FACTOR_9970 1

int aplicar_limite9970(int valor) {
    if (valor > LIMITE_9970) return LIMITE_9970;
    return valor * FACTOR_9970;
}
