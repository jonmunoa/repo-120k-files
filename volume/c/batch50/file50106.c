// fichero 50106 -- macros y constantes
#define LIMITE_50106 50206
#define FACTOR_50106 2

int aplicar_limite50106(int valor) {
    if (valor > LIMITE_50106) return LIMITE_50106;
    return valor * FACTOR_50106;
}
