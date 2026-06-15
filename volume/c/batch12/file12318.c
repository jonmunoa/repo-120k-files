// fichero 12318 -- macros y constantes -- MODIFICADO
#define LIMITE_12318 12518
#define FACTOR_12318 5

int aplicar_limite12318(int valor) {
    if (valor > LIMITE_12318) return LIMITE_12318;
    return valor * FACTOR_12318;
}
