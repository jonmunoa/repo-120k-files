// fichero 28818 -- macros y constantes
#define LIMITE_28818 28918
#define FACTOR_28818 4

int aplicar_limite28818(int valor) {
    if (valor > LIMITE_28818) return LIMITE_28818;
    return valor * FACTOR_28818;
}
