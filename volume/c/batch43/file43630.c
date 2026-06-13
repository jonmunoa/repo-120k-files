// fichero 43630 -- macros y constantes
#define LIMITE_43630 43730
#define FACTOR_43630 1

int aplicar_limite43630(int valor) {
    if (valor > LIMITE_43630) return LIMITE_43630;
    return valor * FACTOR_43630;
}
