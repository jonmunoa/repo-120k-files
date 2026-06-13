// fichero 43054 -- macros y constantes
#define LIMITE_43054 43154
#define FACTOR_43054 5

int aplicar_limite43054(int valor) {
    if (valor > LIMITE_43054) return LIMITE_43054;
    return valor * FACTOR_43054;
}
