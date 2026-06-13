// fichero 36858 -- macros y constantes
#define LIMITE_36858 36958
#define FACTOR_36858 4

int aplicar_limite36858(int valor) {
    if (valor > LIMITE_36858) return LIMITE_36858;
    return valor * FACTOR_36858;
}
