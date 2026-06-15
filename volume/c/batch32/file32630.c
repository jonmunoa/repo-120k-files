// fichero 32630 -- macros y constantes -- MODIFICADO
#define LIMITE_32630 32830
#define FACTOR_32630 2

int aplicar_limite32630(int valor) {
    if (valor > LIMITE_32630) return LIMITE_32630;
    return valor * FACTOR_32630;
}
