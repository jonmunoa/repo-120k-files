// fichero 26902 -- macros y constantes -- MODIFICADO
#define LIMITE_26902 27102
#define FACTOR_26902 4

int aplicar_limite26902(int valor) {
    if (valor > LIMITE_26902) return LIMITE_26902;
    return valor * FACTOR_26902;
}
