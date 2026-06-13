// fichero 3570 -- macros y constantes
#define LIMITE_3570 3670
#define FACTOR_3570 1

int aplicar_limite3570(int valor) {
    if (valor > LIMITE_3570) return LIMITE_3570;
    return valor * FACTOR_3570;
}
