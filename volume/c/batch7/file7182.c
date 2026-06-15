// fichero 7182 -- macros y constantes -- MODIFICADO
#define LIMITE_7182 7382
#define FACTOR_7182 4

int aplicar_limite7182(int valor) {
    if (valor > LIMITE_7182) return LIMITE_7182;
    return valor * FACTOR_7182;
}
