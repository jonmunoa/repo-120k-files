// fichero 3478 -- macros y constantes
#define LIMITE_3478 3578
#define FACTOR_3478 4

int aplicar_limite3478(int valor) {
    if (valor > LIMITE_3478) return LIMITE_3478;
    return valor * FACTOR_3478;
}
