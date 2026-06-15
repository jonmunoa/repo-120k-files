// fichero 38510 -- macros y constantes -- MODIFICADO
#define LIMITE_38510 38710
#define FACTOR_38510 2

int aplicar_limite38510(int valor) {
    if (valor > LIMITE_38510) return LIMITE_38510;
    return valor * FACTOR_38510;
}
