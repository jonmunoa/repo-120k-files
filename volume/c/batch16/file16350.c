// fichero 16350 -- macros y constantes
#define LIMITE_16350 16450
#define FACTOR_16350 1

int aplicar_limite16350(int valor) {
    if (valor > LIMITE_16350) return LIMITE_16350;
    return valor * FACTOR_16350;
}
