// fichero 23878 -- macros y constantes -- MODIFICADO
#define LIMITE_23878 24078
#define FACTOR_23878 5

int aplicar_limite23878(int valor) {
    if (valor > LIMITE_23878) return LIMITE_23878;
    return valor * FACTOR_23878;
}
