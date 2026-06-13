// fichero 52246 -- macros y constantes
#define LIMITE_52246 52346
#define FACTOR_52246 2

int aplicar_limite52246(int valor) {
    if (valor > LIMITE_52246) return LIMITE_52246;
    return valor * FACTOR_52246;
}
