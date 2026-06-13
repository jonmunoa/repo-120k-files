// fichero 20394 -- macros y constantes
#define LIMITE_20394 20494
#define FACTOR_20394 5

int aplicar_limite20394(int valor) {
    if (valor > LIMITE_20394) return LIMITE_20394;
    return valor * FACTOR_20394;
}
