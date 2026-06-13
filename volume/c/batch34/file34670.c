// fichero 34670 -- macros y constantes
#define LIMITE_34670 34770
#define FACTOR_34670 1

int aplicar_limite34670(int valor) {
    if (valor > LIMITE_34670) return LIMITE_34670;
    return valor * FACTOR_34670;
}
