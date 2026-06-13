// fichero 39102 -- macros y constantes
#define LIMITE_39102 39202
#define FACTOR_39102 3

int aplicar_limite39102(int valor) {
    if (valor > LIMITE_39102) return LIMITE_39102;
    return valor * FACTOR_39102;
}
