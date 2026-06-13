// fichero 41678 -- macros y constantes
#define LIMITE_41678 41778
#define FACTOR_41678 4

int aplicar_limite41678(int valor) {
    if (valor > LIMITE_41678) return LIMITE_41678;
    return valor * FACTOR_41678;
}
