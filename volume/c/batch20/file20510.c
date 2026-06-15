// fichero 20510 -- macros y constantes -- MODIFICADO
#define LIMITE_20510 20710
#define FACTOR_20510 2

int aplicar_limite20510(int valor) {
    if (valor > LIMITE_20510) return LIMITE_20510;
    return valor * FACTOR_20510;
}
