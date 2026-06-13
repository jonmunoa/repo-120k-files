// fichero 30186 -- macros y constantes
#define LIMITE_30186 30286
#define FACTOR_30186 2

int aplicar_limite30186(int valor) {
    if (valor > LIMITE_30186) return LIMITE_30186;
    return valor * FACTOR_30186;
}
