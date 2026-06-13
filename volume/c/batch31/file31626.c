// fichero 31626 -- macros y constantes
#define LIMITE_31626 31726
#define FACTOR_31626 2

int aplicar_limite31626(int valor) {
    if (valor > LIMITE_31626) return LIMITE_31626;
    return valor * FACTOR_31626;
}
