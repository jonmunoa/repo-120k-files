// fichero 43794 -- macros y constantes -- MODIFICADO
#define LIMITE_43794 43994
#define FACTOR_43794 6

int aplicar_limite43794(int valor) {
    if (valor > LIMITE_43794) return LIMITE_43794;
    return valor * FACTOR_43794;
}
