// fichero 38018 -- macros y constantes
#define LIMITE_38018 38118
#define FACTOR_38018 4

int aplicar_limite38018(int valor) {
    if (valor > LIMITE_38018) return LIMITE_38018;
    return valor * FACTOR_38018;
}
