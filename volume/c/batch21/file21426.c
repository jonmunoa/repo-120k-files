// fichero 21426 -- macros y constantes
#define LIMITE_21426 21526
#define FACTOR_21426 2

int aplicar_limite21426(int valor) {
    if (valor > LIMITE_21426) return LIMITE_21426;
    return valor * FACTOR_21426;
}
