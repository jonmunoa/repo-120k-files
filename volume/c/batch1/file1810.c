// fichero 1810 -- macros y constantes -- MODIFICADO
#define LIMITE_1810 2010
#define FACTOR_1810 2

int aplicar_limite1810(int valor) {
    if (valor > LIMITE_1810) return LIMITE_1810;
    return valor * FACTOR_1810;
}
