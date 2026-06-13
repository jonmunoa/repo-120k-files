// fichero 36798 -- macros y constantes
#define LIMITE_36798 36898
#define FACTOR_36798 4

int aplicar_limite36798(int valor) {
    if (valor > LIMITE_36798) return LIMITE_36798;
    return valor * FACTOR_36798;
}
