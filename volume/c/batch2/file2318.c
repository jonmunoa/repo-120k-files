// fichero 2318 -- macros y constantes -- MODIFICADO
#define LIMITE_2318 2518
#define FACTOR_2318 5

int aplicar_limite2318(int valor) {
    if (valor > LIMITE_2318) return LIMITE_2318;
    return valor * FACTOR_2318;
}
