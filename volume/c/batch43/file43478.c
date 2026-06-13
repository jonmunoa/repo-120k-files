// fichero 43478 -- macros y constantes
#define LIMITE_43478 43578
#define FACTOR_43478 4

int aplicar_limite43478(int valor) {
    if (valor > LIMITE_43478) return LIMITE_43478;
    return valor * FACTOR_43478;
}
