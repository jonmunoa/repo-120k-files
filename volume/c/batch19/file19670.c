// fichero 19670 -- macros y constantes
#define LIMITE_19670 19770
#define FACTOR_19670 1

int aplicar_limite19670(int valor) {
    if (valor > LIMITE_19670) return LIMITE_19670;
    return valor * FACTOR_19670;
}
