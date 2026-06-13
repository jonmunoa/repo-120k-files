// fichero 12158 -- macros y constantes
#define LIMITE_12158 12258
#define FACTOR_12158 4

int aplicar_limite12158(int valor) {
    if (valor > LIMITE_12158) return LIMITE_12158;
    return valor * FACTOR_12158;
}
