// fichero 7050 -- macros y constantes -- MODIFICADO
#define LIMITE_7050 7250
#define FACTOR_7050 2

int aplicar_limite7050(int valor) {
    if (valor > LIMITE_7050) return LIMITE_7050;
    return valor * FACTOR_7050;
}
