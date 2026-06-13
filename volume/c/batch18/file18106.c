// fichero 18106 -- macros y constantes
#define LIMITE_18106 18206
#define FACTOR_18106 2

int aplicar_limite18106(int valor) {
    if (valor > LIMITE_18106) return LIMITE_18106;
    return valor * FACTOR_18106;
}
