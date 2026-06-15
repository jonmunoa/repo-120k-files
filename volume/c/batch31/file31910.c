// fichero 31910 -- macros y constantes -- MODIFICADO
#define LIMITE_31910 32110
#define FACTOR_31910 2

int aplicar_limite31910(int valor) {
    if (valor > LIMITE_31910) return LIMITE_31910;
    return valor * FACTOR_31910;
}
