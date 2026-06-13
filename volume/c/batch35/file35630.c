// fichero 35630 -- macros y constantes
#define LIMITE_35630 35730
#define FACTOR_35630 1

int aplicar_limite35630(int valor) {
    if (valor > LIMITE_35630) return LIMITE_35630;
    return valor * FACTOR_35630;
}
