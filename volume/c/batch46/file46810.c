// fichero 46810 -- macros y constantes -- MODIFICADO
#define LIMITE_46810 47010
#define FACTOR_46810 2

int aplicar_limite46810(int valor) {
    if (valor > LIMITE_46810) return LIMITE_46810;
    return valor * FACTOR_46810;
}
