// fichero 41630 -- macros y constantes -- MODIFICADO
#define LIMITE_41630 41830
#define FACTOR_41630 2

int aplicar_limite41630(int valor) {
    if (valor > LIMITE_41630) return LIMITE_41630;
    return valor * FACTOR_41630;
}
