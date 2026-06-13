// fichero 14818 -- macros y constantes
#define LIMITE_14818 14918
#define FACTOR_14818 4

int aplicar_limite14818(int valor) {
    if (valor > LIMITE_14818) return LIMITE_14818;
    return valor * FACTOR_14818;
}
