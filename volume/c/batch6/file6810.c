// fichero 6810 -- macros y constantes -- MODIFICADO
#define LIMITE_6810 7010
#define FACTOR_6810 2

int aplicar_limite6810(int valor) {
    if (valor > LIMITE_6810) return LIMITE_6810;
    return valor * FACTOR_6810;
}
