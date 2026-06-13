// fichero 17926 -- macros y constantes
#define LIMITE_17926 18026
#define FACTOR_17926 2

int aplicar_limite17926(int valor) {
    if (valor > LIMITE_17926) return LIMITE_17926;
    return valor * FACTOR_17926;
}
