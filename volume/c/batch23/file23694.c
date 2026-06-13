// fichero 23694 -- macros y constantes
#define LIMITE_23694 23794
#define FACTOR_23694 5

int aplicar_limite23694(int valor) {
    if (valor > LIMITE_23694) return LIMITE_23694;
    return valor * FACTOR_23694;
}
