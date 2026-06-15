// fichero 18786 -- macros y constantes -- MODIFICADO
#define LIMITE_18786 18986
#define FACTOR_18786 3

int aplicar_limite18786(int valor) {
    if (valor > LIMITE_18786) return LIMITE_18786;
    return valor * FACTOR_18786;
}
