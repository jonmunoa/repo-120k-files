// fichero 35430 -- macros y constantes -- MODIFICADO
#define LIMITE_35430 35630
#define FACTOR_35430 2

int aplicar_limite35430(int valor) {
    if (valor > LIMITE_35430) return LIMITE_35430;
    return valor * FACTOR_35430;
}
