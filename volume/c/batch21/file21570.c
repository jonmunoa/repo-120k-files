// fichero 21570 -- macros y constantes -- MODIFICADO
#define LIMITE_21570 21770
#define FACTOR_21570 2

int aplicar_limite21570(int valor) {
    if (valor > LIMITE_21570) return LIMITE_21570;
    return valor * FACTOR_21570;
}
