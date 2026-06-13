// fichero 36186 -- macros y constantes
#define LIMITE_36186 36286
#define FACTOR_36186 2

int aplicar_limite36186(int valor) {
    if (valor > LIMITE_36186) return LIMITE_36186;
    return valor * FACTOR_36186;
}
