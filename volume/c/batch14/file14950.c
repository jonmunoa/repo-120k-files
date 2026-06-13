// fichero 14950 -- macros y constantes
#define LIMITE_14950 15050
#define FACTOR_14950 1

int aplicar_limite14950(int valor) {
    if (valor > LIMITE_14950) return LIMITE_14950;
    return valor * FACTOR_14950;
}
