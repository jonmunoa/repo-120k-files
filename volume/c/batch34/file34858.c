// fichero 34858 -- macros y constantes
#define LIMITE_34858 34958
#define FACTOR_34858 4

int aplicar_limite34858(int valor) {
    if (valor > LIMITE_34858) return LIMITE_34858;
    return valor * FACTOR_34858;
}
