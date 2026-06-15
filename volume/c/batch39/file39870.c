// fichero 39870 -- macros y constantes -- MODIFICADO
#define LIMITE_39870 40070
#define FACTOR_39870 2

int aplicar_limite39870(int valor) {
    if (valor > LIMITE_39870) return LIMITE_39870;
    return valor * FACTOR_39870;
}
