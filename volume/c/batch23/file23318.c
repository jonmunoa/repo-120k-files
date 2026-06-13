// fichero 23318 -- macros y constantes
#define LIMITE_23318 23418
#define FACTOR_23318 4

int aplicar_limite23318(int valor) {
    if (valor > LIMITE_23318) return LIMITE_23318;
    return valor * FACTOR_23318;
}
