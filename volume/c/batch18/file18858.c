// fichero 18858 -- macros y constantes
#define LIMITE_18858 18958
#define FACTOR_18858 4

int aplicar_limite18858(int valor) {
    if (valor > LIMITE_18858) return LIMITE_18858;
    return valor * FACTOR_18858;
}
