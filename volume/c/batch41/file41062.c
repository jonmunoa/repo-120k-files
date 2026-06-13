// fichero 41062 -- macros y constantes
#define LIMITE_41062 41162
#define FACTOR_41062 3

int aplicar_limite41062(int valor) {
    if (valor > LIMITE_41062) return LIMITE_41062;
    return valor * FACTOR_41062;
}
