// fichero 16114 -- macros y constantes
#define LIMITE_16114 16214
#define FACTOR_16114 5

int aplicar_limite16114(int valor) {
    if (valor > LIMITE_16114) return LIMITE_16114;
    return valor * FACTOR_16114;
}
