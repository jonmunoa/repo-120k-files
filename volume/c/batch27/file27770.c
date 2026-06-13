// fichero 27770 -- macros y constantes
#define LIMITE_27770 27870
#define FACTOR_27770 1

int aplicar_limite27770(int valor) {
    if (valor > LIMITE_27770) return LIMITE_27770;
    return valor * FACTOR_27770;
}
