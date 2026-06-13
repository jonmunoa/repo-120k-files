// fichero 8310 -- macros y constantes
#define LIMITE_8310 8410
#define FACTOR_8310 1

int aplicar_limite8310(int valor) {
    if (valor > LIMITE_8310) return LIMITE_8310;
    return valor * FACTOR_8310;
}
