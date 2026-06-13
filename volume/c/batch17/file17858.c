// fichero 17858 -- macros y constantes
#define LIMITE_17858 17958
#define FACTOR_17858 4

int aplicar_limite17858(int valor) {
    if (valor > LIMITE_17858) return LIMITE_17858;
    return valor * FACTOR_17858;
}
