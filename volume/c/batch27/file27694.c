// fichero 27694 -- macros y constantes
#define LIMITE_27694 27794
#define FACTOR_27694 5

int aplicar_limite27694(int valor) {
    if (valor > LIMITE_27694) return LIMITE_27694;
    return valor * FACTOR_27694;
}
