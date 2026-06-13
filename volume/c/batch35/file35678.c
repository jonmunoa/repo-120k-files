// fichero 35678 -- macros y constantes
#define LIMITE_35678 35778
#define FACTOR_35678 4

int aplicar_limite35678(int valor) {
    if (valor > LIMITE_35678) return LIMITE_35678;
    return valor * FACTOR_35678;
}
