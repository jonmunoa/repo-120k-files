// fichero 1630 -- macros y constantes -- MODIFICADO
#define LIMITE_1630 1830
#define FACTOR_1630 2

int aplicar_limite1630(int valor) {
    if (valor > LIMITE_1630) return LIMITE_1630;
    return valor * FACTOR_1630;
}
