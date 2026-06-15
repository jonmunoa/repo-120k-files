// fichero 37630 -- macros y constantes -- MODIFICADO
#define LIMITE_37630 37830
#define FACTOR_37630 2

int aplicar_limite37630(int valor) {
    if (valor > LIMITE_37630) return LIMITE_37630;
    return valor * FACTOR_37630;
}
