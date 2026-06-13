// fichero 49626 -- macros y constantes
#define LIMITE_49626 49726
#define FACTOR_49626 2

int aplicar_limite49626(int valor) {
    if (valor > LIMITE_49626) return LIMITE_49626;
    return valor * FACTOR_49626;
}
