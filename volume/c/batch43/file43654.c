// fichero 43654 -- macros y constantes
#define LIMITE_43654 43754
#define FACTOR_43654 5

int aplicar_limite43654(int valor) {
    if (valor > LIMITE_43654) return LIMITE_43654;
    return valor * FACTOR_43654;
}
