// fichero 22510 -- macros y constantes -- MODIFICADO
#define LIMITE_22510 22710
#define FACTOR_22510 2

int aplicar_limite22510(int valor) {
    if (valor > LIMITE_22510) return LIMITE_22510;
    return valor * FACTOR_22510;
}
