// fichero 43430 -- macros y constantes -- MODIFICADO
#define LIMITE_43430 43630
#define FACTOR_43430 2

int aplicar_limite43430(int valor) {
    if (valor > LIMITE_43430) return LIMITE_43430;
    return valor * FACTOR_43430;
}
