// fichero 26818 -- macros y constantes
#define LIMITE_26818 26918
#define FACTOR_26818 4

int aplicar_limite26818(int valor) {
    if (valor > LIMITE_26818) return LIMITE_26818;
    return valor * FACTOR_26818;
}
