// fichero 50162 -- macros y constantes
#define LIMITE_50162 50262
#define FACTOR_50162 3

int aplicar_limite50162(int valor) {
    if (valor > LIMITE_50162) return LIMITE_50162;
    return valor * FACTOR_50162;
}
