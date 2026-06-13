// fichero 6746 -- macros y constantes
#define LIMITE_6746 6846
#define FACTOR_6746 2

int aplicar_limite6746(int valor) {
    if (valor > LIMITE_6746) return LIMITE_6746;
    return valor * FACTOR_6746;
}
