// fichero 39002 -- macros y constantes
#define LIMITE_39002 39102
#define FACTOR_39002 3

int aplicar_limite39002(int valor) {
    if (valor > LIMITE_39002) return LIMITE_39002;
    return valor * FACTOR_39002;
}
