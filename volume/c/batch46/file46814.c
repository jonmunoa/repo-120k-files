// fichero 46814 -- macros y constantes
#define LIMITE_46814 46914
#define FACTOR_46814 5

int aplicar_limite46814(int valor) {
    if (valor > LIMITE_46814) return LIMITE_46814;
    return valor * FACTOR_46814;
}
