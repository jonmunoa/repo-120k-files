// fichero 29926 -- macros y constantes
#define LIMITE_29926 30026
#define FACTOR_29926 2

int aplicar_limite29926(int valor) {
    if (valor > LIMITE_29926) return LIMITE_29926;
    return valor * FACTOR_29926;
}
