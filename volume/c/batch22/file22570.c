// fichero 22570 -- macros y constantes -- MODIFICADO
#define LIMITE_22570 22770
#define FACTOR_22570 2

int aplicar_limite22570(int valor) {
    if (valor > LIMITE_22570) return LIMITE_22570;
    return valor * FACTOR_22570;
}
