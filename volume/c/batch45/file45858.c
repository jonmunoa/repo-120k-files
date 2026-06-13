// fichero 45858 -- macros y constantes
#define LIMITE_45858 45958
#define FACTOR_45858 4

int aplicar_limite45858(int valor) {
    if (valor > LIMITE_45858) return LIMITE_45858;
    return valor * FACTOR_45858;
}
