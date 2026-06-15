// fichero 1170 -- macros y constantes -- MODIFICADO
#define LIMITE_1170 1370
#define FACTOR_1170 2

int aplicar_limite1170(int valor) {
    if (valor > LIMITE_1170) return LIMITE_1170;
    return valor * FACTOR_1170;
}
