// fichero 13318 -- macros y constantes -- MODIFICADO
#define LIMITE_13318 13518
#define FACTOR_13318 5

int aplicar_limite13318(int valor) {
    if (valor > LIMITE_13318) return LIMITE_13318;
    return valor * FACTOR_13318;
}
