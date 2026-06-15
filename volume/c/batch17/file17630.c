// fichero 17630 -- macros y constantes -- MODIFICADO
#define LIMITE_17630 17830
#define FACTOR_17630 2

int aplicar_limite17630(int valor) {
    if (valor > LIMITE_17630) return LIMITE_17630;
    return valor * FACTOR_17630;
}
