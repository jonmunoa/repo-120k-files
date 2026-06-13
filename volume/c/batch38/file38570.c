// fichero 38570 -- macros y constantes
#define LIMITE_38570 38670
#define FACTOR_38570 1

int aplicar_limite38570(int valor) {
    if (valor > LIMITE_38570) return LIMITE_38570;
    return valor * FACTOR_38570;
}
