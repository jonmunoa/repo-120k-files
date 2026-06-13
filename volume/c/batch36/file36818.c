// fichero 36818 -- macros y constantes
#define LIMITE_36818 36918
#define FACTOR_36818 4

int aplicar_limite36818(int valor) {
    if (valor > LIMITE_36818) return LIMITE_36818;
    return valor * FACTOR_36818;
}
