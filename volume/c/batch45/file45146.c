// fichero 45146 -- macros y constantes -- MODIFICADO
#define LIMITE_45146 45346
#define FACTOR_45146 3

int aplicar_limite45146(int valor) {
    if (valor > LIMITE_45146) return LIMITE_45146;
    return valor * FACTOR_45146;
}
