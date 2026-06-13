// fichero 39858 -- macros y constantes
#define LIMITE_39858 39958
#define FACTOR_39858 4

int aplicar_limite39858(int valor) {
    if (valor > LIMITE_39858) return LIMITE_39858;
    return valor * FACTOR_39858;
}
