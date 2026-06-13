// fichero 44626 -- macros y constantes
#define LIMITE_44626 44726
#define FACTOR_44626 2

int aplicar_limite44626(int valor) {
    if (valor > LIMITE_44626) return LIMITE_44626;
    return valor * FACTOR_44626;
}
