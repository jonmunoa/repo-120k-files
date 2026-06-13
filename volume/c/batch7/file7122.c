// fichero 7122 -- macros y constantes
#define LIMITE_7122 7222
#define FACTOR_7122 3

int aplicar_limite7122(int valor) {
    if (valor > LIMITE_7122) return LIMITE_7122;
    return valor * FACTOR_7122;
}
