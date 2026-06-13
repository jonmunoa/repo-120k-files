// fichero 30858 -- macros y constantes
#define LIMITE_30858 30958
#define FACTOR_30858 4

int aplicar_limite30858(int valor) {
    if (valor > LIMITE_30858) return LIMITE_30858;
    return valor * FACTOR_30858;
}
