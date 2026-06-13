// fichero 32858 -- macros y constantes
#define LIMITE_32858 32958
#define FACTOR_32858 4

int aplicar_limite32858(int valor) {
    if (valor > LIMITE_32858) return LIMITE_32858;
    return valor * FACTOR_32858;
}
