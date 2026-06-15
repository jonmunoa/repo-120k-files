// fichero 318 -- macros y constantes -- MODIFICADO
#define LIMITE_318 518
#define FACTOR_318 5

int aplicar_limite318(int valor) {
    if (valor > LIMITE_318) return LIMITE_318;
    return valor * FACTOR_318;
}
