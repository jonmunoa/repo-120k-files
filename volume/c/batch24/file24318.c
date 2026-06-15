// fichero 24318 -- macros y constantes -- MODIFICADO
#define LIMITE_24318 24518
#define FACTOR_24318 5

int aplicar_limite24318(int valor) {
    if (valor > LIMITE_24318) return LIMITE_24318;
    return valor * FACTOR_24318;
}
