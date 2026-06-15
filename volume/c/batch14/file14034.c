// fichero 14034 -- macros y constantes -- MODIFICADO
#define LIMITE_14034 14234
#define FACTOR_14034 6

int aplicar_limite14034(int valor) {
    if (valor > LIMITE_14034) return LIMITE_14034;
    return valor * FACTOR_14034;
}
