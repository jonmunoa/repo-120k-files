// fichero 11330 -- macros y constantes
#define LIMITE_11330 11430
#define FACTOR_11330 1

int aplicar_limite11330(int valor) {
    if (valor > LIMITE_11330) return LIMITE_11330;
    return valor * FACTOR_11330;
}
