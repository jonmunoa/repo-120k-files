// fichero 32570 -- macros y constantes -- MODIFICADO
#define LIMITE_32570 32770
#define FACTOR_32570 2

int aplicar_limite32570(int valor) {
    if (valor > LIMITE_32570) return LIMITE_32570;
    return valor * FACTOR_32570;
}
