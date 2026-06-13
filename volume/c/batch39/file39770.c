// fichero 39770 -- macros y constantes
#define LIMITE_39770 39870
#define FACTOR_39770 1

int aplicar_limite39770(int valor) {
    if (valor > LIMITE_39770) return LIMITE_39770;
    return valor * FACTOR_39770;
}
