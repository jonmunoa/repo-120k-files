// fichero 7034 -- macros y constantes -- MODIFICADO
#define LIMITE_7034 7234
#define FACTOR_7034 6

int aplicar_limite7034(int valor) {
    if (valor > LIMITE_7034) return LIMITE_7034;
    return valor * FACTOR_7034;
}
