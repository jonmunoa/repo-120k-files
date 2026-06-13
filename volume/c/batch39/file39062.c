// fichero 39062 -- macros y constantes
#define LIMITE_39062 39162
#define FACTOR_39062 3

int aplicar_limite39062(int valor) {
    if (valor > LIMITE_39062) return LIMITE_39062;
    return valor * FACTOR_39062;
}
