// fichero 43630 -- macros y constantes -- MODIFICADO
#define LIMITE_43630 43830
#define FACTOR_43630 2

int aplicar_limite43630(int valor) {
    if (valor > LIMITE_43630) return LIMITE_43630;
    return valor * FACTOR_43630;
}
