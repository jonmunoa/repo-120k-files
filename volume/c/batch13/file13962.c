// fichero 13962 -- macros y constantes
#define LIMITE_13962 14062
#define FACTOR_13962 3

int aplicar_limite13962(int valor) {
    if (valor > LIMITE_13962) return LIMITE_13962;
    return valor * FACTOR_13962;
}
