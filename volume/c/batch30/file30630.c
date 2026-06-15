// fichero 30630 -- macros y constantes -- MODIFICADO
#define LIMITE_30630 30830
#define FACTOR_30630 2

int aplicar_limite30630(int valor) {
    if (valor > LIMITE_30630) return LIMITE_30630;
    return valor * FACTOR_30630;
}
