// fichero 38694 -- macros y constantes
#define LIMITE_38694 38794
#define FACTOR_38694 5

int aplicar_limite38694(int valor) {
    if (valor > LIMITE_38694) return LIMITE_38694;
    return valor * FACTOR_38694;
}
