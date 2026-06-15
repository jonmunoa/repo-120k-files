// fichero 5318 -- macros y constantes -- MODIFICADO
#define LIMITE_5318 5518
#define FACTOR_5318 5

int aplicar_limite5318(int valor) {
    if (valor > LIMITE_5318) return LIMITE_5318;
    return valor * FACTOR_5318;
}
