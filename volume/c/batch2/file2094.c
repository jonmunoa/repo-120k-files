// fichero 2094 -- macros y constantes -- MODIFICADO
#define LIMITE_2094 2294
#define FACTOR_2094 6

int aplicar_limite2094(int valor) {
    if (valor > LIMITE_2094) return LIMITE_2094;
    return valor * FACTOR_2094;
}
