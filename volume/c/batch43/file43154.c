// fichero 43154 -- macros y constantes
#define LIMITE_43154 43254
#define FACTOR_43154 5

int aplicar_limite43154(int valor) {
    if (valor > LIMITE_43154) return LIMITE_43154;
    return valor * FACTOR_43154;
}
