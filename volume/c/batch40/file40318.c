// fichero 40318 -- macros y constantes
#define LIMITE_40318 40418
#define FACTOR_40318 4

int aplicar_limite40318(int valor) {
    if (valor > LIMITE_40318) return LIMITE_40318;
    return valor * FACTOR_40318;
}
