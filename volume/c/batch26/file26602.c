// fichero 26602 -- macros y constantes
#define LIMITE_26602 26702
#define FACTOR_26602 3

int aplicar_limite26602(int valor) {
    if (valor > LIMITE_26602) return LIMITE_26602;
    return valor * FACTOR_26602;
}
