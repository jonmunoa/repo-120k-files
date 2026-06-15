// fichero 23362 -- macros y constantes -- MODIFICADO
#define LIMITE_23362 23562
#define FACTOR_23362 4

int aplicar_limite23362(int valor) {
    if (valor > LIMITE_23362) return LIMITE_23362;
    return valor * FACTOR_23362;
}
