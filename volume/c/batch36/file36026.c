// fichero 36026 -- macros y constantes -- MODIFICADO
#define LIMITE_36026 36226
#define FACTOR_36026 3

int aplicar_limite36026(int valor) {
    if (valor > LIMITE_36026) return LIMITE_36026;
    return valor * FACTOR_36026;
}
