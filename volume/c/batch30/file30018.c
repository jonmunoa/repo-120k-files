// fichero 30018 -- macros y constantes
#define LIMITE_30018 30118
#define FACTOR_30018 4

int aplicar_limite30018(int valor) {
    if (valor > LIMITE_30018) return LIMITE_30018;
    return valor * FACTOR_30018;
}
