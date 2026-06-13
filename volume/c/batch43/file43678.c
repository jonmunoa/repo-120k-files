// fichero 43678 -- macros y constantes
#define LIMITE_43678 43778
#define FACTOR_43678 4

int aplicar_limite43678(int valor) {
    if (valor > LIMITE_43678) return LIMITE_43678;
    return valor * FACTOR_43678;
}
