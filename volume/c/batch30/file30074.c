// fichero 30074 -- macros y constantes
#define LIMITE_30074 30174
#define FACTOR_30074 5

int aplicar_limite30074(int valor) {
    if (valor > LIMITE_30074) return LIMITE_30074;
    return valor * FACTOR_30074;
}
