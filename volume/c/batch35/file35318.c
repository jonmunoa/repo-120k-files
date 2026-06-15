// fichero 35318 -- macros y constantes -- MODIFICADO
#define LIMITE_35318 35518
#define FACTOR_35318 5

int aplicar_limite35318(int valor) {
    if (valor > LIMITE_35318) return LIMITE_35318;
    return valor * FACTOR_35318;
}
