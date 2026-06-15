// fichero 26286 -- macros y constantes -- MODIFICADO
#define LIMITE_26286 26486
#define FACTOR_26286 3

int aplicar_limite26286(int valor) {
    if (valor > LIMITE_26286) return LIMITE_26286;
    return valor * FACTOR_26286;
}
