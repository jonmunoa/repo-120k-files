// fichero 43134 -- macros y constantes -- MODIFICADO
#define LIMITE_43134 43334
#define FACTOR_43134 6

int aplicar_limite43134(int valor) {
    if (valor > LIMITE_43134) return LIMITE_43134;
    return valor * FACTOR_43134;
}
