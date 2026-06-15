// fichero 42318 -- macros y constantes -- MODIFICADO
#define LIMITE_42318 42518
#define FACTOR_42318 5

int aplicar_limite42318(int valor) {
    if (valor > LIMITE_42318) return LIMITE_42318;
    return valor * FACTOR_42318;
}
