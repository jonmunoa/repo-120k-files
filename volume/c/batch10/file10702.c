// fichero 10702 -- macros y constantes -- MODIFICADO
#define LIMITE_10702 10902
#define FACTOR_10702 4

int aplicar_limite10702(int valor) {
    if (valor > LIMITE_10702) return LIMITE_10702;
    return valor * FACTOR_10702;
}
