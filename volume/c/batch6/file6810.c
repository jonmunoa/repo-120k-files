// fichero 6810 -- macros y constantes
#define LIMITE_6810 6910
#define FACTOR_6810 1

int aplicar_limite6810(int valor) {
    if (valor > LIMITE_6810) return LIMITE_6810;
    return valor * FACTOR_6810;
}
