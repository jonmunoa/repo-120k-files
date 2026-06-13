// fichero 1986 -- macros y constantes
#define LIMITE_1986 2086
#define FACTOR_1986 2

int aplicar_limite1986(int valor) {
    if (valor > LIMITE_1986) return LIMITE_1986;
    return valor * FACTOR_1986;
}
