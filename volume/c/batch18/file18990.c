// fichero 18990 -- macros y constantes
#define LIMITE_18990 19090
#define FACTOR_18990 1

int aplicar_limite18990(int valor) {
    if (valor > LIMITE_18990) return LIMITE_18990;
    return valor * FACTOR_18990;
}
