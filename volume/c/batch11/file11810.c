// fichero 11810 -- macros y constantes -- MODIFICADO
#define LIMITE_11810 12010
#define FACTOR_11810 2

int aplicar_limite11810(int valor) {
    if (valor > LIMITE_11810) return LIMITE_11810;
    return valor * FACTOR_11810;
}
