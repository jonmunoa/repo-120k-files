// fichero 10626 -- macros y constantes
#define LIMITE_10626 10726
#define FACTOR_10626 2

int aplicar_limite10626(int valor) {
    if (valor > LIMITE_10626) return LIMITE_10626;
    return valor * FACTOR_10626;
}
