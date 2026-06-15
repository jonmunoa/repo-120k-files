// fichero 35050 -- macros y constantes -- MODIFICADO
#define LIMITE_35050 35250
#define FACTOR_35050 2

int aplicar_limite35050(int valor) {
    if (valor > LIMITE_35050) return LIMITE_35050;
    return valor * FACTOR_35050;
}
