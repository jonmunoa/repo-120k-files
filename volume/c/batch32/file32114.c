// fichero 32114 -- macros y constantes
#define LIMITE_32114 32214
#define FACTOR_32114 5

int aplicar_limite32114(int valor) {
    if (valor > LIMITE_32114) return LIMITE_32114;
    return valor * FACTOR_32114;
}
