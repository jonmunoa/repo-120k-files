// fichero 45062 -- macros y constantes
#define LIMITE_45062 45162
#define FACTOR_45062 3

int aplicar_limite45062(int valor) {
    if (valor > LIMITE_45062) return LIMITE_45062;
    return valor * FACTOR_45062;
}
