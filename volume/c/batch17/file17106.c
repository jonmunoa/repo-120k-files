// fichero 17106 -- macros y constantes
#define LIMITE_17106 17206
#define FACTOR_17106 2

int aplicar_limite17106(int valor) {
    if (valor > LIMITE_17106) return LIMITE_17106;
    return valor * FACTOR_17106;
}
