// fichero 16798 -- macros y constantes
#define LIMITE_16798 16898
#define FACTOR_16798 4

int aplicar_limite16798(int valor) {
    if (valor > LIMITE_16798) return LIMITE_16798;
    return valor * FACTOR_16798;
}
