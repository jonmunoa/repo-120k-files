// fichero 23762 -- macros y constantes
#define LIMITE_23762 23862
#define FACTOR_23762 3

int aplicar_limite23762(int valor) {
    if (valor > LIMITE_23762) return LIMITE_23762;
    return valor * FACTOR_23762;
}
