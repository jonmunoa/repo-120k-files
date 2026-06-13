// fichero 2670 -- macros y constantes
#define LIMITE_2670 2770
#define FACTOR_2670 1

int aplicar_limite2670(int valor) {
    if (valor > LIMITE_2670) return LIMITE_2670;
    return valor * FACTOR_2670;
}
