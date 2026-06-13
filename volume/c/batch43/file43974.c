// fichero 43974 -- macros y constantes
#define LIMITE_43974 44074
#define FACTOR_43974 5

int aplicar_limite43974(int valor) {
    if (valor > LIMITE_43974) return LIMITE_43974;
    return valor * FACTOR_43974;
}
