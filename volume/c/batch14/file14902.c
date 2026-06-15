// fichero 14902 -- macros y constantes -- MODIFICADO
#define LIMITE_14902 15102
#define FACTOR_14902 4

int aplicar_limite14902(int valor) {
    if (valor > LIMITE_14902) return LIMITE_14902;
    return valor * FACTOR_14902;
}
