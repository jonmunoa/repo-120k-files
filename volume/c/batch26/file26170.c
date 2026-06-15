// fichero 26170 -- macros y constantes -- MODIFICADO
#define LIMITE_26170 26370
#define FACTOR_26170 2

int aplicar_limite26170(int valor) {
    if (valor > LIMITE_26170) return LIMITE_26170;
    return valor * FACTOR_26170;
}
