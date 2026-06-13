// fichero 22090 -- macros y constantes
#define LIMITE_22090 22190
#define FACTOR_22090 1

int aplicar_limite22090(int valor) {
    if (valor > LIMITE_22090) return LIMITE_22090;
    return valor * FACTOR_22090;
}
