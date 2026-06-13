// fichero 16094 -- macros y constantes
#define LIMITE_16094 16194
#define FACTOR_16094 5

int aplicar_limite16094(int valor) {
    if (valor > LIMITE_16094) return LIMITE_16094;
    return valor * FACTOR_16094;
}
