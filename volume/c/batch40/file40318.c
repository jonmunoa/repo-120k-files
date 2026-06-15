// fichero 40318 -- macros y constantes -- MODIFICADO
#define LIMITE_40318 40518
#define FACTOR_40318 5

int aplicar_limite40318(int valor) {
    if (valor > LIMITE_40318) return LIMITE_40318;
    return valor * FACTOR_40318;
}
