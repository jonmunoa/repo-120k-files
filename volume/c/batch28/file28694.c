// fichero 28694 -- macros y constantes
#define LIMITE_28694 28794
#define FACTOR_28694 5

int aplicar_limite28694(int valor) {
    if (valor > LIMITE_28694) return LIMITE_28694;
    return valor * FACTOR_28694;
}
