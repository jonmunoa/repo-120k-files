// fichero 21990 -- macros y constantes
#define LIMITE_21990 22090
#define FACTOR_21990 1

int aplicar_limite21990(int valor) {
    if (valor > LIMITE_21990) return LIMITE_21990;
    return valor * FACTOR_21990;
}
