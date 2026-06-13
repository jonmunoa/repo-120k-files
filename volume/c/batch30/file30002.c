// fichero 30002 -- macros y constantes
#define LIMITE_30002 30102
#define FACTOR_30002 3

int aplicar_limite30002(int valor) {
    if (valor > LIMITE_30002) return LIMITE_30002;
    return valor * FACTOR_30002;
}
