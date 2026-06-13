// fichero 818 -- macros y constantes
#define LIMITE_818 918
#define FACTOR_818 4

int aplicar_limite818(int valor) {
    if (valor > LIMITE_818) return LIMITE_818;
    return valor * FACTOR_818;
}
