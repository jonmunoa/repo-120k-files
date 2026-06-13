// fichero 36810 -- macros y constantes
#define LIMITE_36810 36910
#define FACTOR_36810 1

int aplicar_limite36810(int valor) {
    if (valor > LIMITE_36810) return LIMITE_36810;
    return valor * FACTOR_36810;
}
