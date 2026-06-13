// fichero 38338 -- macros y constantes
#define LIMITE_38338 38438
#define FACTOR_38338 4

int aplicar_limite38338(int valor) {
    if (valor > LIMITE_38338) return LIMITE_38338;
    return valor * FACTOR_38338;
}
