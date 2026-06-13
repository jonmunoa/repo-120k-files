// fichero 2626 -- macros y constantes
#define LIMITE_2626 2726
#define FACTOR_2626 2

int aplicar_limite2626(int valor) {
    if (valor > LIMITE_2626) return LIMITE_2626;
    return valor * FACTOR_2626;
}
