// fichero 22318 -- macros y constantes -- MODIFICADO
#define LIMITE_22318 22518
#define FACTOR_22318 5

int aplicar_limite22318(int valor) {
    if (valor > LIMITE_22318) return LIMITE_22318;
    return valor * FACTOR_22318;
}
