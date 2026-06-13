// fichero 2954 -- macros y constantes
#define LIMITE_2954 3054
#define FACTOR_2954 5

int aplicar_limite2954(int valor) {
    if (valor > LIMITE_2954) return LIMITE_2954;
    return valor * FACTOR_2954;
}
