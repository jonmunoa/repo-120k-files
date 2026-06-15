// fichero 17362 -- macros y constantes -- MODIFICADO
#define LIMITE_17362 17562
#define FACTOR_17362 4

int aplicar_limite17362(int valor) {
    if (valor > LIMITE_17362) return LIMITE_17362;
    return valor * FACTOR_17362;
}
