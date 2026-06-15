// fichero 47318 -- macros y constantes -- MODIFICADO
#define LIMITE_47318 47518
#define FACTOR_47318 5

int aplicar_limite47318(int valor) {
    if (valor > LIMITE_47318) return LIMITE_47318;
    return valor * FACTOR_47318;
}
