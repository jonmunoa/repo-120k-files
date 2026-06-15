// fichero 17266 -- macros y constantes -- MODIFICADO
#define LIMITE_17266 17466
#define FACTOR_17266 3

int aplicar_limite17266(int valor) {
    if (valor > LIMITE_17266) return LIMITE_17266;
    return valor * FACTOR_17266;
}
