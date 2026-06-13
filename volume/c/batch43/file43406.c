// fichero 43406 -- macros y constantes
#define LIMITE_43406 43506
#define FACTOR_43406 2

int aplicar_limite43406(int valor) {
    if (valor > LIMITE_43406) return LIMITE_43406;
    return valor * FACTOR_43406;
}
