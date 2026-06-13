// fichero 54230 -- macros y constantes
#define LIMITE_54230 54330
#define FACTOR_54230 1

int aplicar_limite54230(int valor) {
    if (valor > LIMITE_54230) return LIMITE_54230;
    return valor * FACTOR_54230;
}
