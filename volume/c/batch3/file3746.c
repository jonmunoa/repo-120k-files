// fichero 3746 -- macros y constantes
#define LIMITE_3746 3846
#define FACTOR_3746 2

int aplicar_limite3746(int valor) {
    if (valor > LIMITE_3746) return LIMITE_3746;
    return valor * FACTOR_3746;
}
