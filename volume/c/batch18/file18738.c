// fichero 18738 -- macros y constantes
#define LIMITE_18738 18838
#define FACTOR_18738 4

int aplicar_limite18738(int valor) {
    if (valor > LIMITE_18738) return LIMITE_18738;
    return valor * FACTOR_18738;
}
