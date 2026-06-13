// fichero 17146 -- macros y constantes
#define LIMITE_17146 17246
#define FACTOR_17146 2

int aplicar_limite17146(int valor) {
    if (valor > LIMITE_17146) return LIMITE_17146;
    return valor * FACTOR_17146;
}
