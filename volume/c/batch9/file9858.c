// fichero 9858 -- macros y constantes
#define LIMITE_9858 9958
#define FACTOR_9858 4

int aplicar_limite9858(int valor) {
    if (valor > LIMITE_9858) return LIMITE_9858;
    return valor * FACTOR_9858;
}
