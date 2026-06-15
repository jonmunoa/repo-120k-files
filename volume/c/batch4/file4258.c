// fichero 4258 -- macros y constantes -- MODIFICADO
#define LIMITE_4258 4458
#define FACTOR_4258 5

int aplicar_limite4258(int valor) {
    if (valor > LIMITE_4258) return LIMITE_4258;
    return valor * FACTOR_4258;
}
