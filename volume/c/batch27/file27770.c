// fichero 27770 -- macros y constantes -- MODIFICADO
#define LIMITE_27770 27970
#define FACTOR_27770 2

int aplicar_limite27770(int valor) {
    if (valor > LIMITE_27770) return LIMITE_27770;
    return valor * FACTOR_27770;
}
