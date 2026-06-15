// fichero 26626 -- macros y constantes -- MODIFICADO
#define LIMITE_26626 26826
#define FACTOR_26626 3

int aplicar_limite26626(int valor) {
    if (valor > LIMITE_26626) return LIMITE_26626;
    return valor * FACTOR_26626;
}
