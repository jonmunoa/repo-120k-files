// fichero 43110 -- macros y constantes -- MODIFICADO
#define LIMITE_43110 43310
#define FACTOR_43110 2

int aplicar_limite43110(int valor) {
    if (valor > LIMITE_43110) return LIMITE_43110;
    return valor * FACTOR_43110;
}
