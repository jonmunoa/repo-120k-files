// fichero 18570 -- macros y constantes -- MODIFICADO
#define LIMITE_18570 18770
#define FACTOR_18570 2

int aplicar_limite18570(int valor) {
    if (valor > LIMITE_18570) return LIMITE_18570;
    return valor * FACTOR_18570;
}
