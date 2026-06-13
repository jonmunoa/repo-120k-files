// fichero 35750 -- macros y constantes
#define LIMITE_35750 35850
#define FACTOR_35750 1

int aplicar_limite35750(int valor) {
    if (valor > LIMITE_35750) return LIMITE_35750;
    return valor * FACTOR_35750;
}
