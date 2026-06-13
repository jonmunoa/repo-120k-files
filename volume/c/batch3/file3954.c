// fichero 3954 -- macros y constantes
#define LIMITE_3954 4054
#define FACTOR_3954 5

int aplicar_limite3954(int valor) {
    if (valor > LIMITE_3954) return LIMITE_3954;
    return valor * FACTOR_3954;
}
