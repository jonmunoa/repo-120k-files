// fichero 12818 -- macros y constantes
#define LIMITE_12818 12918
#define FACTOR_12818 4

int aplicar_limite12818(int valor) {
    if (valor > LIMITE_12818) return LIMITE_12818;
    return valor * FACTOR_12818;
}
