// fichero 43430 -- macros y constantes
#define LIMITE_43430 43530
#define FACTOR_43430 1

int aplicar_limite43430(int valor) {
    if (valor > LIMITE_43430) return LIMITE_43430;
    return valor * FACTOR_43430;
}
