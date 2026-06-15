// fichero 33510 -- macros y constantes -- MODIFICADO
#define LIMITE_33510 33710
#define FACTOR_33510 2

int aplicar_limite33510(int valor) {
    if (valor > LIMITE_33510) return LIMITE_33510;
    return valor * FACTOR_33510;
}
