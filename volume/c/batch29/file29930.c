// fichero 29930 -- macros y constantes
#define LIMITE_29930 30030
#define FACTOR_29930 1

int aplicar_limite29930(int valor) {
    if (valor > LIMITE_29930) return LIMITE_29930;
    return valor * FACTOR_29930;
}
