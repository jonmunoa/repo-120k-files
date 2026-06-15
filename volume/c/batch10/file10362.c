// fichero 10362 -- macros y constantes -- MODIFICADO
#define LIMITE_10362 10562
#define FACTOR_10362 4

int aplicar_limite10362(int valor) {
    if (valor > LIMITE_10362) return LIMITE_10362;
    return valor * FACTOR_10362;
}
