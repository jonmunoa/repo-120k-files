// fichero 15570 -- macros y constantes
#define LIMITE_15570 15670
#define FACTOR_15570 1

int aplicar_limite15570(int valor) {
    if (valor > LIMITE_15570) return LIMITE_15570;
    return valor * FACTOR_15570;
}
