// fichero 35530 -- macros y constantes
#define LIMITE_35530 35630
#define FACTOR_35530 1

int aplicar_limite35530(int valor) {
    if (valor > LIMITE_35530) return LIMITE_35530;
    return valor * FACTOR_35530;
}
