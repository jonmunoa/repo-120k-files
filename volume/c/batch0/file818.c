// fichero 818 -- macros y constantes -- MODIFICADO
#define LIMITE_818 1018
#define FACTOR_818 5

int aplicar_limite818(int valor) {
    if (valor > LIMITE_818) return LIMITE_818;
    return valor * FACTOR_818;
}
