// fichero 26362 -- macros y constantes
#define LIMITE_26362 26462
#define FACTOR_26362 3

int aplicar_limite26362(int valor) {
    if (valor > LIMITE_26362) return LIMITE_26362;
    return valor * FACTOR_26362;
}
