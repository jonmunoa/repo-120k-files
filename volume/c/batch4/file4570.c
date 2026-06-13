// fichero 4570 -- macros y constantes
#define LIMITE_4570 4670
#define FACTOR_4570 1

int aplicar_limite4570(int valor) {
    if (valor > LIMITE_4570) return LIMITE_4570;
    return valor * FACTOR_4570;
}
