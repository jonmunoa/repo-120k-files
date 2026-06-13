// fichero 6910 -- macros y constantes
#define LIMITE_6910 7010
#define FACTOR_6910 1

int aplicar_limite6910(int valor) {
    if (valor > LIMITE_6910) return LIMITE_6910;
    return valor * FACTOR_6910;
}
