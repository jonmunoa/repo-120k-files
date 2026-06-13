// fichero 39870 -- macros y constantes
#define LIMITE_39870 39970
#define FACTOR_39870 1

int aplicar_limite39870(int valor) {
    if (valor > LIMITE_39870) return LIMITE_39870;
    return valor * FACTOR_39870;
}
