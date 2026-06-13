// fichero 18818 -- macros y constantes
#define LIMITE_18818 18918
#define FACTOR_18818 4

int aplicar_limite18818(int valor) {
    if (valor > LIMITE_18818) return LIMITE_18818;
    return valor * FACTOR_18818;
}
