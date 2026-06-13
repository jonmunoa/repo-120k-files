// fichero 43714 -- macros y constantes
#define LIMITE_43714 43814
#define FACTOR_43714 5

int aplicar_limite43714(int valor) {
    if (valor > LIMITE_43714) return LIMITE_43714;
    return valor * FACTOR_43714;
}
