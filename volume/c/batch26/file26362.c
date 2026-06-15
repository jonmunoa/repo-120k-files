// fichero 26362 -- macros y constantes -- MODIFICADO
#define LIMITE_26362 26562
#define FACTOR_26362 4

int aplicar_limite26362(int valor) {
    if (valor > LIMITE_26362) return LIMITE_26362;
    return valor * FACTOR_26362;
}
