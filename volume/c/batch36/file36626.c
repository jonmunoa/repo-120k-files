// fichero 36626 -- macros y constantes -- MODIFICADO
#define LIMITE_36626 36826
#define FACTOR_36626 3

int aplicar_limite36626(int valor) {
    if (valor > LIMITE_36626) return LIMITE_36626;
    return valor * FACTOR_36626;
}
