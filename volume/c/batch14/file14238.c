// fichero 14238 -- macros y constantes
#define LIMITE_14238 14338
#define FACTOR_14238 4

int aplicar_limite14238(int valor) {
    if (valor > LIMITE_14238) return LIMITE_14238;
    return valor * FACTOR_14238;
}
