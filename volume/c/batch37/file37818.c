// fichero 37818 -- macros y constantes
#define LIMITE_37818 37918
#define FACTOR_37818 4

int aplicar_limite37818(int valor) {
    if (valor > LIMITE_37818) return LIMITE_37818;
    return valor * FACTOR_37818;
}
