// fichero 46858 -- macros y constantes
#define LIMITE_46858 46958
#define FACTOR_46858 4

int aplicar_limite46858(int valor) {
    if (valor > LIMITE_46858) return LIMITE_46858;
    return valor * FACTOR_46858;
}
