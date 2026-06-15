// fichero 46630 -- macros y constantes -- MODIFICADO
#define LIMITE_46630 46830
#define FACTOR_46630 2

int aplicar_limite46630(int valor) {
    if (valor > LIMITE_46630) return LIMITE_46630;
    return valor * FACTOR_46630;
}
