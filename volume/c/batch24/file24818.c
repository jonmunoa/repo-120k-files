// fichero 24818 -- macros y constantes
#define LIMITE_24818 24918
#define FACTOR_24818 4

int aplicar_limite24818(int valor) {
    if (valor > LIMITE_24818) return LIMITE_24818;
    return valor * FACTOR_24818;
}
