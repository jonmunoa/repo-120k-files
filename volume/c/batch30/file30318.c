// fichero 30318 -- macros y constantes -- MODIFICADO
#define LIMITE_30318 30518
#define FACTOR_30318 5

int aplicar_limite30318(int valor) {
    if (valor > LIMITE_30318) return LIMITE_30318;
    return valor * FACTOR_30318;
}
