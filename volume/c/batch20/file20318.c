// fichero 20318 -- macros y constantes -- MODIFICADO
#define LIMITE_20318 20518
#define FACTOR_20318 5

int aplicar_limite20318(int valor) {
    if (valor > LIMITE_20318) return LIMITE_20318;
    return valor * FACTOR_20318;
}
