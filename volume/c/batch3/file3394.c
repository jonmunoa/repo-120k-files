// fichero 3394 -- macros y constantes
#define LIMITE_3394 3494
#define FACTOR_3394 5

int aplicar_limite3394(int valor) {
    if (valor > LIMITE_3394) return LIMITE_3394;
    return valor * FACTOR_3394;
}
