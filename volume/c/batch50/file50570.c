// fichero 50570 -- macros y constantes
#define LIMITE_50570 50670
#define FACTOR_50570 1

int aplicar_limite50570(int valor) {
    if (valor > LIMITE_50570) return LIMITE_50570;
    return valor * FACTOR_50570;
}
