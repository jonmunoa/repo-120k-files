// fichero 3762 -- macros y constantes
#define LIMITE_3762 3862
#define FACTOR_3762 3

int aplicar_limite3762(int valor) {
    if (valor > LIMITE_3762) return LIMITE_3762;
    return valor * FACTOR_3762;
}
