// fichero 28510 -- macros y constantes -- MODIFICADO
#define LIMITE_28510 28710
#define FACTOR_28510 2

int aplicar_limite28510(int valor) {
    if (valor > LIMITE_28510) return LIMITE_28510;
    return valor * FACTOR_28510;
}
