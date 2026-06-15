// fichero 2878 -- macros y constantes -- MODIFICADO
#define LIMITE_2878 3078
#define FACTOR_2878 5

int aplicar_limite2878(int valor) {
    if (valor > LIMITE_2878) return LIMITE_2878;
    return valor * FACTOR_2878;
}
