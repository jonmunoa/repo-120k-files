// fichero 16818 -- macros y constantes
#define LIMITE_16818 16918
#define FACTOR_16818 4

int aplicar_limite16818(int valor) {
    if (valor > LIMITE_16818) return LIMITE_16818;
    return valor * FACTOR_16818;
}
