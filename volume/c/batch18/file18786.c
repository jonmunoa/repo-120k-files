// fichero 18786 -- macros y constantes
#define LIMITE_18786 18886
#define FACTOR_18786 2

int aplicar_limite18786(int valor) {
    if (valor > LIMITE_18786) return LIMITE_18786;
    return valor * FACTOR_18786;
}
