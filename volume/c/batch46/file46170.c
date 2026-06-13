// fichero 46170 -- macros y constantes
#define LIMITE_46170 46270
#define FACTOR_46170 1

int aplicar_limite46170(int valor) {
    if (valor > LIMITE_46170) return LIMITE_46170;
    return valor * FACTOR_46170;
}
