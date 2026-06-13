// fichero 16802 -- macros y constantes
#define LIMITE_16802 16902
#define FACTOR_16802 3

int aplicar_limite16802(int valor) {
    if (valor > LIMITE_16802) return LIMITE_16802;
    return valor * FACTOR_16802;
}
