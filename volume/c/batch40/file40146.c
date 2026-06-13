// fichero 40146 -- macros y constantes
#define LIMITE_40146 40246
#define FACTOR_40146 2

int aplicar_limite40146(int valor) {
    if (valor > LIMITE_40146) return LIMITE_40146;
    return valor * FACTOR_40146;
}
