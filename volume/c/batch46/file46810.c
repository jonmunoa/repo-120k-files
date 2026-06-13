// fichero 46810 -- macros y constantes
#define LIMITE_46810 46910
#define FACTOR_46810 1

int aplicar_limite46810(int valor) {
    if (valor > LIMITE_46810) return LIMITE_46810;
    return valor * FACTOR_46810;
}
