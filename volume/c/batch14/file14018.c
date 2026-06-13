// fichero 14018 -- macros y constantes
#define LIMITE_14018 14118
#define FACTOR_14018 4

int aplicar_limite14018(int valor) {
    if (valor > LIMITE_14018) return LIMITE_14018;
    return valor * FACTOR_14018;
}
