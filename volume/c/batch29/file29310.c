// fichero 29310 -- macros y constantes
#define LIMITE_29310 29410
#define FACTOR_29310 1

int aplicar_limite29310(int valor) {
    if (valor > LIMITE_29310) return LIMITE_29310;
    return valor * FACTOR_29310;
}
