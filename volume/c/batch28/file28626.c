// fichero 28626 -- macros y constantes -- MODIFICADO
#define LIMITE_28626 28826
#define FACTOR_28626 3

int aplicar_limite28626(int valor) {
    if (valor > LIMITE_28626) return LIMITE_28626;
    return valor * FACTOR_28626;
}
