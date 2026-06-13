// fichero 6570 -- macros y constantes
#define LIMITE_6570 6670
#define FACTOR_6570 1

int aplicar_limite6570(int valor) {
    if (valor > LIMITE_6570) return LIMITE_6570;
    return valor * FACTOR_6570;
}
