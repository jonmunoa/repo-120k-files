// fichero 35666 -- macros y constantes -- MODIFICADO
#define LIMITE_35666 35866
#define FACTOR_35666 3

int aplicar_limite35666(int valor) {
    if (valor > LIMITE_35666) return LIMITE_35666;
    return valor * FACTOR_35666;
}
