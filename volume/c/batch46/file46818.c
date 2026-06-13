// fichero 46818 -- macros y constantes
#define LIMITE_46818 46918
#define FACTOR_46818 4

int aplicar_limite46818(int valor) {
    if (valor > LIMITE_46818) return LIMITE_46818;
    return valor * FACTOR_46818;
}
