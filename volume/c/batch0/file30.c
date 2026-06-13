// fichero 30 -- macros y constantes
#define LIMITE_30 130
#define FACTOR_30 1

int aplicar_limite30(int valor) {
    if (valor > LIMITE_30) return LIMITE_30;
    return valor * FACTOR_30;
}
