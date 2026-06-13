// fichero 20670 -- macros y constantes
#define LIMITE_20670 20770
#define FACTOR_20670 1

int aplicar_limite20670(int valor) {
    if (valor > LIMITE_20670) return LIMITE_20670;
    return valor * FACTOR_20670;
}
