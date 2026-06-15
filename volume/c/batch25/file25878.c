// fichero 25878 -- macros y constantes -- MODIFICADO
#define LIMITE_25878 26078
#define FACTOR_25878 5

int aplicar_limite25878(int valor) {
    if (valor > LIMITE_25878) return LIMITE_25878;
    return valor * FACTOR_25878;
}
