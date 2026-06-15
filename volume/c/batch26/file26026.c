// fichero 26026 -- macros y constantes -- MODIFICADO
#define LIMITE_26026 26226
#define FACTOR_26026 3

int aplicar_limite26026(int valor) {
    if (valor > LIMITE_26026) return LIMITE_26026;
    return valor * FACTOR_26026;
}
