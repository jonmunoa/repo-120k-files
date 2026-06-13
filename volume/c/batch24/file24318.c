// fichero 24318 -- macros y constantes
#define LIMITE_24318 24418
#define FACTOR_24318 4

int aplicar_limite24318(int valor) {
    if (valor > LIMITE_24318) return LIMITE_24318;
    return valor * FACTOR_24318;
}
