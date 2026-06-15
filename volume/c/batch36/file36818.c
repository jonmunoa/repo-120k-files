// fichero 36818 -- macros y constantes -- MODIFICADO
#define LIMITE_36818 37018
#define FACTOR_36818 5

int aplicar_limite36818(int valor) {
    if (valor > LIMITE_36818) return LIMITE_36818;
    return valor * FACTOR_36818;
}
