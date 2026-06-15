// fichero 46170 -- macros y constantes -- MODIFICADO
#define LIMITE_46170 46370
#define FACTOR_46170 2

int aplicar_limite46170(int valor) {
    if (valor > LIMITE_46170) return LIMITE_46170;
    return valor * FACTOR_46170;
}
