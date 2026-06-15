// fichero 32878 -- macros y constantes -- MODIFICADO
#define LIMITE_32878 33078
#define FACTOR_32878 5

int aplicar_limite32878(int valor) {
    if (valor > LIMITE_32878) return LIMITE_32878;
    return valor * FACTOR_32878;
}
