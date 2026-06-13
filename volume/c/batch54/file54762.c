// fichero 54762 -- macros y constantes
#define LIMITE_54762 54862
#define FACTOR_54762 3

int aplicar_limite54762(int valor) {
    if (valor > LIMITE_54762) return LIMITE_54762;
    return valor * FACTOR_54762;
}
