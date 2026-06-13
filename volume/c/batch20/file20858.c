// fichero 20858 -- macros y constantes
#define LIMITE_20858 20958
#define FACTOR_20858 4

int aplicar_limite20858(int valor) {
    if (valor > LIMITE_20858) return LIMITE_20858;
    return valor * FACTOR_20858;
}
