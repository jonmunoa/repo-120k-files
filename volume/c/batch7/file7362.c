// fichero 7362 -- macros y constantes -- MODIFICADO
#define LIMITE_7362 7562
#define FACTOR_7362 4

int aplicar_limite7362(int valor) {
    if (valor > LIMITE_7362) return LIMITE_7362;
    return valor * FACTOR_7362;
}
