// fichero 10350 -- macros y constantes
#define LIMITE_10350 10450
#define FACTOR_10350 1

int aplicar_limite10350(int valor) {
    if (valor > LIMITE_10350) return LIMITE_10350;
    return valor * FACTOR_10350;
}
