// fichero 43878 -- macros y constantes
#define LIMITE_43878 43978
#define FACTOR_43878 4

int aplicar_limite43878(int valor) {
    if (valor > LIMITE_43878) return LIMITE_43878;
    return valor * FACTOR_43878;
}
