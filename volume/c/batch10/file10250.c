// fichero 10250 -- macros y constantes
#define LIMITE_10250 10350
#define FACTOR_10250 1

int aplicar_limite10250(int valor) {
    if (valor > LIMITE_10250) return LIMITE_10250;
    return valor * FACTOR_10250;
}
