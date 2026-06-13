// fichero 22810 -- macros y constantes
#define LIMITE_22810 22910
#define FACTOR_22810 1

int aplicar_limite22810(int valor) {
    if (valor > LIMITE_22810) return LIMITE_22810;
    return valor * FACTOR_22810;
}
