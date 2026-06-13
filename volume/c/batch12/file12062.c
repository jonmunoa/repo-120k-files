// fichero 12062 -- macros y constantes
#define LIMITE_12062 12162
#define FACTOR_12062 3

int aplicar_limite12062(int valor) {
    if (valor > LIMITE_12062) return LIMITE_12062;
    return valor * FACTOR_12062;
}
