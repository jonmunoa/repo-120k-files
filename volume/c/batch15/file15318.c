// fichero 15318 -- macros y constantes -- MODIFICADO
#define LIMITE_15318 15518
#define FACTOR_15318 5

int aplicar_limite15318(int valor) {
    if (valor > LIMITE_15318) return LIMITE_15318;
    return valor * FACTOR_15318;
}
