// fichero 12250 -- macros y constantes
#define LIMITE_12250 12350
#define FACTOR_12250 1

int aplicar_limite12250(int valor) {
    if (valor > LIMITE_12250) return LIMITE_12250;
    return valor * FACTOR_12250;
}
