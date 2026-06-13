// fichero 10002 -- macros y constantes
#define LIMITE_10002 10102
#define FACTOR_10002 3

int aplicar_limite10002(int valor) {
    if (valor > LIMITE_10002) return LIMITE_10002;
    return valor * FACTOR_10002;
}
