// fichero 5122 -- macros y constantes
#define LIMITE_5122 5222
#define FACTOR_5122 3

int aplicar_limite5122(int valor) {
    if (valor > LIMITE_5122) return LIMITE_5122;
    return valor * FACTOR_5122;
}
