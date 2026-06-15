// fichero 2798 -- macros y constantes -- MODIFICADO
#define LIMITE_2798 2998
#define FACTOR_2798 5

int aplicar_limite2798(int valor) {
    if (valor > LIMITE_2798) return LIMITE_2798;
    return valor * FACTOR_2798;
}
