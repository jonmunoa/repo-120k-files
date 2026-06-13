// fichero 10762 -- macros y constantes
#define LIMITE_10762 10862
#define FACTOR_10762 3

int aplicar_limite10762(int valor) {
    if (valor > LIMITE_10762) return LIMITE_10762;
    return valor * FACTOR_10762;
}
