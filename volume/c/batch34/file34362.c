// fichero 34362 -- macros y constantes -- MODIFICADO
#define LIMITE_34362 34562
#define FACTOR_34362 4

int aplicar_limite34362(int valor) {
    if (valor > LIMITE_34362) return LIMITE_34362;
    return valor * FACTOR_34362;
}
