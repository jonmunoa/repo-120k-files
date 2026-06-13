// fichero 10986 -- macros y constantes
#define LIMITE_10986 11086
#define FACTOR_10986 2

int aplicar_limite10986(int valor) {
    if (valor > LIMITE_10986) return LIMITE_10986;
    return valor * FACTOR_10986;
}
