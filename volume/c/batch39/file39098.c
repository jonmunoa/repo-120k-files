// fichero 39098 -- macros y constantes
#define LIMITE_39098 39198
#define FACTOR_39098 4

int aplicar_limite39098(int valor) {
    if (valor > LIMITE_39098) return LIMITE_39098;
    return valor * FACTOR_39098;
}
