// fichero 40694 -- macros y constantes
#define LIMITE_40694 40794
#define FACTOR_40694 5

int aplicar_limite40694(int valor) {
    if (valor > LIMITE_40694) return LIMITE_40694;
    return valor * FACTOR_40694;
}
