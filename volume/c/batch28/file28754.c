// fichero 28754 -- macros y constantes
#define LIMITE_28754 28854
#define FACTOR_28754 5

int aplicar_limite28754(int valor) {
    if (valor > LIMITE_28754) return LIMITE_28754;
    return valor * FACTOR_28754;
}
