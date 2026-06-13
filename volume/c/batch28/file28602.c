// fichero 28602 -- macros y constantes
#define LIMITE_28602 28702
#define FACTOR_28602 3

int aplicar_limite28602(int valor) {
    if (valor > LIMITE_28602) return LIMITE_28602;
    return valor * FACTOR_28602;
}
