// fichero 46714 -- macros y constantes
#define LIMITE_46714 46814
#define FACTOR_46714 5

int aplicar_limite46714(int valor) {
    if (valor > LIMITE_46714) return LIMITE_46714;
    return valor * FACTOR_46714;
}
