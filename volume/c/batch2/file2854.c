// fichero 2854 -- macros y constantes
#define LIMITE_2854 2954
#define FACTOR_2854 5

int aplicar_limite2854(int valor) {
    if (valor > LIMITE_2854) return LIMITE_2854;
    return valor * FACTOR_2854;
}
