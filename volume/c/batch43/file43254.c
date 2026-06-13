// fichero 43254 -- macros y constantes
#define LIMITE_43254 43354
#define FACTOR_43254 5

int aplicar_limite43254(int valor) {
    if (valor > LIMITE_43254) return LIMITE_43254;
    return valor * FACTOR_43254;
}
