// fichero 53570 -- macros y constantes
#define LIMITE_53570 53670
#define FACTOR_53570 1

int aplicar_limite53570(int valor) {
    if (valor > LIMITE_53570) return LIMITE_53570;
    return valor * FACTOR_53570;
}
