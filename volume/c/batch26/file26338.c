// fichero 26338 -- macros y constantes
#define LIMITE_26338 26438
#define FACTOR_26338 4

int aplicar_limite26338(int valor) {
    if (valor > LIMITE_26338) return LIMITE_26338;
    return valor * FACTOR_26338;
}
