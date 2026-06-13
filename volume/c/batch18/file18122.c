// fichero 18122 -- macros y constantes
#define LIMITE_18122 18222
#define FACTOR_18122 3

int aplicar_limite18122(int valor) {
    if (valor > LIMITE_18122) return LIMITE_18122;
    return valor * FACTOR_18122;
}
