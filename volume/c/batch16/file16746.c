// fichero 16746 -- macros y constantes
#define LIMITE_16746 16846
#define FACTOR_16746 2

int aplicar_limite16746(int valor) {
    if (valor > LIMITE_16746) return LIMITE_16746;
    return valor * FACTOR_16746;
}
