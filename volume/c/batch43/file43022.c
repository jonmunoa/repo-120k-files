// fichero 43022 -- macros y constantes
#define LIMITE_43022 43122
#define FACTOR_43022 3

int aplicar_limite43022(int valor) {
    if (valor > LIMITE_43022) return LIMITE_43022;
    return valor * FACTOR_43022;
}
