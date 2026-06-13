// fichero 12106 -- macros y constantes
#define LIMITE_12106 12206
#define FACTOR_12106 2

int aplicar_limite12106(int valor) {
    if (valor > LIMITE_12106) return LIMITE_12106;
    return valor * FACTOR_12106;
}
