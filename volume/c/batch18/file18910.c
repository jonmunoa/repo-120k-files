// fichero 18910 -- macros y constantes
#define LIMITE_18910 19010
#define FACTOR_18910 1

int aplicar_limite18910(int valor) {
    if (valor > LIMITE_18910) return LIMITE_18910;
    return valor * FACTOR_18910;
}
