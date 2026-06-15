// fichero 43878 -- macros y constantes -- MODIFICADO
#define LIMITE_43878 44078
#define FACTOR_43878 5

int aplicar_limite43878(int valor) {
    if (valor > LIMITE_43878) return LIMITE_43878;
    return valor * FACTOR_43878;
}
