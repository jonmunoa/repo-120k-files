// fichero 19858 -- macros y constantes
#define LIMITE_19858 19958
#define FACTOR_19858 4

int aplicar_limite19858(int valor) {
    if (valor > LIMITE_19858) return LIMITE_19858;
    return valor * FACTOR_19858;
}
