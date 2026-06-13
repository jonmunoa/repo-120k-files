// fichero 50762 -- macros y constantes
#define LIMITE_50762 50862
#define FACTOR_50762 3

int aplicar_limite50762(int valor) {
    if (valor > LIMITE_50762) return LIMITE_50762;
    return valor * FACTOR_50762;
}
