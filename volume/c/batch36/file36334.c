// fichero 36334 -- macros y constantes -- MODIFICADO
#define LIMITE_36334 36534
#define FACTOR_36334 6

int aplicar_limite36334(int valor) {
    if (valor > LIMITE_36334) return LIMITE_36334;
    return valor * FACTOR_36334;
}
