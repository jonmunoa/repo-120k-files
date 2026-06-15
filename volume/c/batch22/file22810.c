// fichero 22810 -- macros y constantes -- MODIFICADO
#define LIMITE_22810 23010
#define FACTOR_22810 2

int aplicar_limite22810(int valor) {
    if (valor > LIMITE_22810) return LIMITE_22810;
    return valor * FACTOR_22810;
}
