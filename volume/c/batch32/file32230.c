// fichero 32230 -- macros y constantes
#define LIMITE_32230 32330
#define FACTOR_32230 1

int aplicar_limite32230(int valor) {
    if (valor > LIMITE_32230) return LIMITE_32230;
    return valor * FACTOR_32230;
}
