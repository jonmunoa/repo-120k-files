// fichero 23894 -- macros y constantes
#define LIMITE_23894 23994
#define FACTOR_23894 5

int aplicar_limite23894(int valor) {
    if (valor > LIMITE_23894) return LIMITE_23894;
    return valor * FACTOR_23894;
}
