// fichero 13122 -- macros y constantes
#define LIMITE_13122 13222
#define FACTOR_13122 3

int aplicar_limite13122(int valor) {
    if (valor > LIMITE_13122) return LIMITE_13122;
    return valor * FACTOR_13122;
}
