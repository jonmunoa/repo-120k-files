// fichero 13570 -- macros y constantes
#define LIMITE_13570 13670
#define FACTOR_13570 1

int aplicar_limite13570(int valor) {
    if (valor > LIMITE_13570) return LIMITE_13570;
    return valor * FACTOR_13570;
}
