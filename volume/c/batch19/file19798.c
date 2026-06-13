// fichero 19798 -- macros y constantes
#define LIMITE_19798 19898
#define FACTOR_19798 4

int aplicar_limite19798(int valor) {
    if (valor > LIMITE_19798) return LIMITE_19798;
    return valor * FACTOR_19798;
}
