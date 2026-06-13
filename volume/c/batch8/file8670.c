// fichero 8670 -- macros y constantes
#define LIMITE_8670 8770
#define FACTOR_8670 1

int aplicar_limite8670(int valor) {
    if (valor > LIMITE_8670) return LIMITE_8670;
    return valor * FACTOR_8670;
}
