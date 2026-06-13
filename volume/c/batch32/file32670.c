// fichero 32670 -- macros y constantes
#define LIMITE_32670 32770
#define FACTOR_32670 1

int aplicar_limite32670(int valor) {
    if (valor > LIMITE_32670) return LIMITE_32670;
    return valor * FACTOR_32670;
}
