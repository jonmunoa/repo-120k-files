// fichero 35630 -- macros y constantes -- MODIFICADO
#define LIMITE_35630 35830
#define FACTOR_35630 2

int aplicar_limite35630(int valor) {
    if (valor > LIMITE_35630) return LIMITE_35630;
    return valor * FACTOR_35630;
}
