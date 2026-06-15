// fichero 41678 -- macros y constantes -- MODIFICADO
#define LIMITE_41678 41878
#define FACTOR_41678 5

int aplicar_limite41678(int valor) {
    if (valor > LIMITE_41678) return LIMITE_41678;
    return valor * FACTOR_41678;
}
