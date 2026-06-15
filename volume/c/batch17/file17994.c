// fichero 17994 -- macros y constantes -- MODIFICADO
#define LIMITE_17994 18194
#define FACTOR_17994 6

int aplicar_limite17994(int valor) {
    if (valor > LIMITE_17994) return LIMITE_17994;
    return valor * FACTOR_17994;
}
