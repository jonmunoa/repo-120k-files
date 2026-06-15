// fichero 10258 -- macros y constantes -- MODIFICADO
#define LIMITE_10258 10458
#define FACTOR_10258 5

int aplicar_limite10258(int valor) {
    if (valor > LIMITE_10258) return LIMITE_10258;
    return valor * FACTOR_10258;
}
