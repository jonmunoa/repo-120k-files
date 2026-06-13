// fichero 2798 -- macros y constantes
#define LIMITE_2798 2898
#define FACTOR_2798 4

int aplicar_limite2798(int valor) {
    if (valor > LIMITE_2798) return LIMITE_2798;
    return valor * FACTOR_2798;
}
