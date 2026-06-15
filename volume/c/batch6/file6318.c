// fichero 6318 -- macros y constantes -- MODIFICADO
#define LIMITE_6318 6518
#define FACTOR_6318 5

int aplicar_limite6318(int valor) {
    if (valor > LIMITE_6318) return LIMITE_6318;
    return valor * FACTOR_6318;
}
