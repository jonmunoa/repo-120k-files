// fichero 6318 -- macros y constantes
#define LIMITE_6318 6418
#define FACTOR_6318 4

int aplicar_limite6318(int valor) {
    if (valor > LIMITE_6318) return LIMITE_6318;
    return valor * FACTOR_6318;
}
