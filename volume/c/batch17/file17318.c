// fichero 17318 -- macros y constantes -- MODIFICADO
#define LIMITE_17318 17518
#define FACTOR_17318 5

int aplicar_limite17318(int valor) {
    if (valor > LIMITE_17318) return LIMITE_17318;
    return valor * FACTOR_17318;
}
