// fichero 3158 -- macros y constantes
#define LIMITE_3158 3258
#define FACTOR_3158 4

int aplicar_limite3158(int valor) {
    if (valor > LIMITE_3158) return LIMITE_3158;
    return valor * FACTOR_3158;
}
