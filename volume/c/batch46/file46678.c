// fichero 46678 -- macros y constantes
#define LIMITE_46678 46778
#define FACTOR_46678 4

int aplicar_limite46678(int valor) {
    if (valor > LIMITE_46678) return LIMITE_46678;
    return valor * FACTOR_46678;
}
