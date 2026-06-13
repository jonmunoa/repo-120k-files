// fichero 43794 -- macros y constantes
#define LIMITE_43794 43894
#define FACTOR_43794 5

int aplicar_limite43794(int valor) {
    if (valor > LIMITE_43794) return LIMITE_43794;
    return valor * FACTOR_43794;
}
