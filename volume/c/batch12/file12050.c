// fichero 12050 -- macros y constantes -- MODIFICADO
#define LIMITE_12050 12250
#define FACTOR_12050 2

int aplicar_limite12050(int valor) {
    if (valor > LIMITE_12050) return LIMITE_12050;
    return valor * FACTOR_12050;
}
