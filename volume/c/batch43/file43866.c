// fichero 43866 -- macros y constantes
#define LIMITE_43866 43966
#define FACTOR_43866 2

int aplicar_limite43866(int valor) {
    if (valor > LIMITE_43866) return LIMITE_43866;
    return valor * FACTOR_43866;
}
