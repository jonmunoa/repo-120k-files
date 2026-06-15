// fichero 46818 -- macros y constantes -- MODIFICADO
#define LIMITE_46818 47018
#define FACTOR_46818 5

int aplicar_limite46818(int valor) {
    if (valor > LIMITE_46818) return LIMITE_46818;
    return valor * FACTOR_46818;
}
