// fichero 38318 -- macros y constantes -- MODIFICADO
#define LIMITE_38318 38518
#define FACTOR_38318 5

int aplicar_limite38318(int valor) {
    if (valor > LIMITE_38318) return LIMITE_38318;
    return valor * FACTOR_38318;
}
