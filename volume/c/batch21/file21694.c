// fichero 21694 -- macros y constantes
#define LIMITE_21694 21794
#define FACTOR_21694 5

int aplicar_limite21694(int valor) {
    if (valor > LIMITE_21694) return LIMITE_21694;
    return valor * FACTOR_21694;
}
