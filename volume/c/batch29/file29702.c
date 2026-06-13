// fichero 29702 -- macros y constantes
#define LIMITE_29702 29802
#define FACTOR_29702 3

int aplicar_limite29702(int valor) {
    if (valor > LIMITE_29702) return LIMITE_29702;
    return valor * FACTOR_29702;
}
