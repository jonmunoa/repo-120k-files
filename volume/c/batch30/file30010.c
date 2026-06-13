// fichero 30010 -- macros y constantes
#define LIMITE_30010 30110
#define FACTOR_30010 1

int aplicar_limite30010(int valor) {
    if (valor > LIMITE_30010) return LIMITE_30010;
    return valor * FACTOR_30010;
}
