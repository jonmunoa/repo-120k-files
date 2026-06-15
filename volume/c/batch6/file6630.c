// fichero 6630 -- macros y constantes -- MODIFICADO
#define LIMITE_6630 6830
#define FACTOR_6630 2

int aplicar_limite6630(int valor) {
    if (valor > LIMITE_6630) return LIMITE_6630;
    return valor * FACTOR_6630;
}
