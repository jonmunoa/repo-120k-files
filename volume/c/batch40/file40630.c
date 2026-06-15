// fichero 40630 -- macros y constantes -- MODIFICADO
#define LIMITE_40630 40830
#define FACTOR_40630 2

int aplicar_limite40630(int valor) {
    if (valor > LIMITE_40630) return LIMITE_40630;
    return valor * FACTOR_40630;
}
