// fichero 35750 -- macros y constantes -- MODIFICADO
#define LIMITE_35750 35950
#define FACTOR_35750 2

int aplicar_limite35750(int valor) {
    if (valor > LIMITE_35750) return LIMITE_35750;
    return valor * FACTOR_35750;
}
