// fichero 45570 -- macros y constantes
#define LIMITE_45570 45670
#define FACTOR_45570 1

int aplicar_limite45570(int valor) {
    if (valor > LIMITE_45570) return LIMITE_45570;
    return valor * FACTOR_45570;
}
