// fichero 43034 -- macros y constantes -- MODIFICADO
#define LIMITE_43034 43234
#define FACTOR_43034 6

int aplicar_limite43034(int valor) {
    if (valor > LIMITE_43034) return LIMITE_43034;
    return valor * FACTOR_43034;
}
