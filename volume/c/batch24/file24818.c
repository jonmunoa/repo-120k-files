// fichero 24818 -- macros y constantes -- MODIFICADO
#define LIMITE_24818 25018
#define FACTOR_24818 5

int aplicar_limite24818(int valor) {
    if (valor > LIMITE_24818) return LIMITE_24818;
    return valor * FACTOR_24818;
}
