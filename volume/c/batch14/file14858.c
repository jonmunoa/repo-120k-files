// fichero 14858 -- macros y constantes
#define LIMITE_14858 14958
#define FACTOR_14858 4

int aplicar_limite14858(int valor) {
    if (valor > LIMITE_14858) return LIMITE_14858;
    return valor * FACTOR_14858;
}
