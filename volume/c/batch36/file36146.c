// fichero 36146 -- macros y constantes -- MODIFICADO
#define LIMITE_36146 36346
#define FACTOR_36146 3

int aplicar_limite36146(int valor) {
    if (valor > LIMITE_36146) return LIMITE_36146;
    return valor * FACTOR_36146;
}
