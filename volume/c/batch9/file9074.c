// fichero 9074 -- macros y constantes
#define LIMITE_9074 9174
#define FACTOR_9074 5

int aplicar_limite9074(int valor) {
    if (valor > LIMITE_9074) return LIMITE_9074;
    return valor * FACTOR_9074;
}
