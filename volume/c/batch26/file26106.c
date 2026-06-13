// fichero 26106 -- macros y constantes
#define LIMITE_26106 26206
#define FACTOR_26106 2

int aplicar_limite26106(int valor) {
    if (valor > LIMITE_26106) return LIMITE_26106;
    return valor * FACTOR_26106;
}
