// fichero 16102 -- macros y constantes
#define LIMITE_16102 16202
#define FACTOR_16102 3

int aplicar_limite16102(int valor) {
    if (valor > LIMITE_16102) return LIMITE_16102;
    return valor * FACTOR_16102;
}
