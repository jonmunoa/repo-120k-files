// fichero 23670 -- macros y constantes
#define LIMITE_23670 23770
#define FACTOR_23670 1

int aplicar_limite23670(int valor) {
    if (valor > LIMITE_23670) return LIMITE_23670;
    return valor * FACTOR_23670;
}
