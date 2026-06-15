// fichero 36170 -- macros y constantes -- MODIFICADO
#define LIMITE_36170 36370
#define FACTOR_36170 2

int aplicar_limite36170(int valor) {
    if (valor > LIMITE_36170) return LIMITE_36170;
    return valor * FACTOR_36170;
}
