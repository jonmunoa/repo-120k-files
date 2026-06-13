// fichero 54526 -- macros y constantes
#define LIMITE_54526 54626
#define FACTOR_54526 2

int aplicar_limite54526(int valor) {
    if (valor > LIMITE_54526) return LIMITE_54526;
    return valor * FACTOR_54526;
}
