// fichero 31570 -- macros y constantes
#define LIMITE_31570 31670
#define FACTOR_31570 1

int aplicar_limite31570(int valor) {
    if (valor > LIMITE_31570) return LIMITE_31570;
    return valor * FACTOR_31570;
}
