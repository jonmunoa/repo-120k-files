// fichero 4122 -- macros y constantes
#define LIMITE_4122 4222
#define FACTOR_4122 3

int aplicar_limite4122(int valor) {
    if (valor > LIMITE_4122) return LIMITE_4122;
    return valor * FACTOR_4122;
}
