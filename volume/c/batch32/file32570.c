// fichero 32570 -- macros y constantes
#define LIMITE_32570 32670
#define FACTOR_32570 1

int aplicar_limite32570(int valor) {
    if (valor > LIMITE_32570) return LIMITE_32570;
    return valor * FACTOR_32570;
}
