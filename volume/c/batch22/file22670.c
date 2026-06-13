// fichero 22670 -- macros y constantes
#define LIMITE_22670 22770
#define FACTOR_22670 1

int aplicar_limite22670(int valor) {
    if (valor > LIMITE_22670) return LIMITE_22670;
    return valor * FACTOR_22670;
}
