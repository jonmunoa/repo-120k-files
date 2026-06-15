// fichero 894 -- macros y constantes -- MODIFICADO
#define LIMITE_894 1094
#define FACTOR_894 6

int aplicar_limite894(int valor) {
    if (valor > LIMITE_894) return LIMITE_894;
    return valor * FACTOR_894;
}
