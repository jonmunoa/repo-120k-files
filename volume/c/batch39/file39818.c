// fichero 39818 -- macros y constantes
#define LIMITE_39818 39918
#define FACTOR_39818 4

int aplicar_limite39818(int valor) {
    if (valor > LIMITE_39818) return LIMITE_39818;
    return valor * FACTOR_39818;
}
