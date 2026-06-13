// fichero 10086 -- macros y constantes
#define LIMITE_10086 10186
#define FACTOR_10086 2

int aplicar_limite10086(int valor) {
    if (valor > LIMITE_10086) return LIMITE_10086;
    return valor * FACTOR_10086;
}
