// fichero 16626 -- macros y constantes
#define LIMITE_16626 16726
#define FACTOR_16626 2

int aplicar_limite16626(int valor) {
    if (valor > LIMITE_16626) return LIMITE_16626;
    return valor * FACTOR_16626;
}
