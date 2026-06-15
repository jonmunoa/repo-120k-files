// fichero 18738 -- macros y constantes -- MODIFICADO
#define LIMITE_18738 18938
#define FACTOR_18738 5

int aplicar_limite18738(int valor) {
    if (valor > LIMITE_18738) return LIMITE_18738;
    return valor * FACTOR_18738;
}
