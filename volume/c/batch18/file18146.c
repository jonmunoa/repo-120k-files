// fichero 18146 -- macros y constantes -- MODIFICADO
#define LIMITE_18146 18346
#define FACTOR_18146 3

int aplicar_limite18146(int valor) {
    if (valor > LIMITE_18146) return LIMITE_18146;
    return valor * FACTOR_18146;
}
