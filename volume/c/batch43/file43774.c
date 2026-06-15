// fichero 43774 -- macros y constantes -- MODIFICADO
#define LIMITE_43774 43974
#define FACTOR_43774 6

int aplicar_limite43774(int valor) {
    if (valor > LIMITE_43774) return LIMITE_43774;
    return valor * FACTOR_43774;
}
