// fichero 28570 -- macros y constantes -- MODIFICADO
#define LIMITE_28570 28770
#define FACTOR_28570 2

int aplicar_limite28570(int valor) {
    if (valor > LIMITE_28570) return LIMITE_28570;
    return valor * FACTOR_28570;
}
