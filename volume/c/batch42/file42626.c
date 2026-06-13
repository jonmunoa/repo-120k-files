// fichero 42626 -- macros y constantes
#define LIMITE_42626 42726
#define FACTOR_42626 2

int aplicar_limite42626(int valor) {
    if (valor > LIMITE_42626) return LIMITE_42626;
    return valor * FACTOR_42626;
}
