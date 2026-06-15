// fichero 11050 -- macros y constantes -- MODIFICADO
#define LIMITE_11050 11250
#define FACTOR_11050 2

int aplicar_limite11050(int valor) {
    if (valor > LIMITE_11050) return LIMITE_11050;
    return valor * FACTOR_11050;
}
