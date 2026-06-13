// fichero 43310 -- macros y constantes
#define LIMITE_43310 43410
#define FACTOR_43310 1

int aplicar_limite43310(int valor) {
    if (valor > LIMITE_43310) return LIMITE_43310;
    return valor * FACTOR_43310;
}
