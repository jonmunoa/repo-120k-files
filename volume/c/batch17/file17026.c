// fichero 17026 -- macros y constantes -- MODIFICADO
#define LIMITE_17026 17226
#define FACTOR_17026 3

int aplicar_limite17026(int valor) {
    if (valor > LIMITE_17026) return LIMITE_17026;
    return valor * FACTOR_17026;
}
