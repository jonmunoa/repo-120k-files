// fichero 29762 -- macros y constantes
#define LIMITE_29762 29862
#define FACTOR_29762 3

int aplicar_limite29762(int valor) {
    if (valor > LIMITE_29762) return LIMITE_29762;
    return valor * FACTOR_29762;
}
