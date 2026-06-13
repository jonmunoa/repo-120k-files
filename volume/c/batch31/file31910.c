// fichero 31910 -- macros y constantes
#define LIMITE_31910 32010
#define FACTOR_31910 1

int aplicar_limite31910(int valor) {
    if (valor > LIMITE_31910) return LIMITE_31910;
    return valor * FACTOR_31910;
}
