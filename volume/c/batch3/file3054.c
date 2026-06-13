// fichero 3054 -- macros y constantes
#define LIMITE_3054 3154
#define FACTOR_3054 5

int aplicar_limite3054(int valor) {
    if (valor > LIMITE_3054) return LIMITE_3054;
    return valor * FACTOR_3054;
}
