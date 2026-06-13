// fichero 10570 -- macros y constantes
#define LIMITE_10570 10670
#define FACTOR_10570 1

int aplicar_limite10570(int valor) {
    if (valor > LIMITE_10570) return LIMITE_10570;
    return valor * FACTOR_10570;
}
