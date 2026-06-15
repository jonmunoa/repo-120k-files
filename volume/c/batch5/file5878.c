// fichero 5878 -- macros y constantes -- MODIFICADO
#define LIMITE_5878 6078
#define FACTOR_5878 5

int aplicar_limite5878(int valor) {
    if (valor > LIMITE_5878) return LIMITE_5878;
    return valor * FACTOR_5878;
}
