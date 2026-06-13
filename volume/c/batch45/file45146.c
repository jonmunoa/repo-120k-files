// fichero 45146 -- macros y constantes
#define LIMITE_45146 45246
#define FACTOR_45146 2

int aplicar_limite45146(int valor) {
    if (valor > LIMITE_45146) return LIMITE_45146;
    return valor * FACTOR_45146;
}
