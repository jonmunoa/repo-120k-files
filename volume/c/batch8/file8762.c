// fichero 8762 -- macros y constantes
#define LIMITE_8762 8862
#define FACTOR_8762 3

int aplicar_limite8762(int valor) {
    if (valor > LIMITE_8762) return LIMITE_8762;
    return valor * FACTOR_8762;
}
