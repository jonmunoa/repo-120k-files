// fichero 30818 -- macros y constantes -- MODIFICADO
#define LIMITE_30818 31018
#define FACTOR_30818 5

int aplicar_limite30818(int valor) {
    if (valor > LIMITE_30818) return LIMITE_30818;
    return valor * FACTOR_30818;
}
