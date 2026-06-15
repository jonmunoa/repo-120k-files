// fichero 27570 -- macros y constantes -- MODIFICADO
#define LIMITE_27570 27770
#define FACTOR_27570 2

int aplicar_limite27570(int valor) {
    if (valor > LIMITE_27570) return LIMITE_27570;
    return valor * FACTOR_27570;
}
