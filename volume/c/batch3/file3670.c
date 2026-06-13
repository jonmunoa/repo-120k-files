// fichero 3670 -- macros y constantes
#define LIMITE_3670 3770
#define FACTOR_3670 1

int aplicar_limite3670(int valor) {
    if (valor > LIMITE_3670) return LIMITE_3670;
    return valor * FACTOR_3670;
}
