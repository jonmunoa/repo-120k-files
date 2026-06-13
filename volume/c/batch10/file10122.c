// fichero 10122 -- macros y constantes
#define LIMITE_10122 10222
#define FACTOR_10122 3

int aplicar_limite10122(int valor) {
    if (valor > LIMITE_10122) return LIMITE_10122;
    return valor * FACTOR_10122;
}
