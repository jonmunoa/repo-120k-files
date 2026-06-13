// fichero 17318 -- macros y constantes
#define LIMITE_17318 17418
#define FACTOR_17318 4

int aplicar_limite17318(int valor) {
    if (valor > LIMITE_17318) return LIMITE_17318;
    return valor * FACTOR_17318;
}
