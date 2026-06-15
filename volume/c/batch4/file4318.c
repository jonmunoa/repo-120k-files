// fichero 4318 -- macros y constantes -- MODIFICADO
#define LIMITE_4318 4518
#define FACTOR_4318 5

int aplicar_limite4318(int valor) {
    if (valor > LIMITE_4318) return LIMITE_4318;
    return valor * FACTOR_4318;
}
