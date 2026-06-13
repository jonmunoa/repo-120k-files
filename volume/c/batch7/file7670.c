// fichero 7670 -- macros y constantes
#define LIMITE_7670 7770
#define FACTOR_7670 1

int aplicar_limite7670(int valor) {
    if (valor > LIMITE_7670) return LIMITE_7670;
    return valor * FACTOR_7670;
}
