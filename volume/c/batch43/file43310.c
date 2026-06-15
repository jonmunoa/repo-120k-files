// fichero 43310 -- macros y constantes -- MODIFICADO
#define LIMITE_43310 43510
#define FACTOR_43310 2

int aplicar_limite43310(int valor) {
    if (valor > LIMITE_43310) return LIMITE_43310;
    return valor * FACTOR_43310;
}
