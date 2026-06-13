// fichero 3858 -- macros y constantes
#define LIMITE_3858 3958
#define FACTOR_3858 4

int aplicar_limite3858(int valor) {
    if (valor > LIMITE_3858) return LIMITE_3858;
    return valor * FACTOR_3858;
}
