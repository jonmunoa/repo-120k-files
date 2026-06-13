// fichero 20818 -- macros y constantes
#define LIMITE_20818 20918
#define FACTOR_20818 4

int aplicar_limite20818(int valor) {
    if (valor > LIMITE_20818) return LIMITE_20818;
    return valor * FACTOR_20818;
}
