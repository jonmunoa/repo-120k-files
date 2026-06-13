// fichero 38510 -- macros y constantes
#define LIMITE_38510 38610
#define FACTOR_38510 1

int aplicar_limite38510(int valor) {
    if (valor > LIMITE_38510) return LIMITE_38510;
    return valor * FACTOR_38510;
}
