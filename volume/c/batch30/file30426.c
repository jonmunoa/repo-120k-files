// fichero 30426 -- macros y constantes
#define LIMITE_30426 30526
#define FACTOR_30426 2

int aplicar_limite30426(int valor) {
    if (valor > LIMITE_30426) return LIMITE_30426;
    return valor * FACTOR_30426;
}
