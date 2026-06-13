// fichero 23818 -- macros y constantes
#define LIMITE_23818 23918
#define FACTOR_23818 4

int aplicar_limite23818(int valor) {
    if (valor > LIMITE_23818) return LIMITE_23818;
    return valor * FACTOR_23818;
}
