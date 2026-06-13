// fichero 14626 -- macros y constantes
#define LIMITE_14626 14726
#define FACTOR_14626 2

int aplicar_limite14626(int valor) {
    if (valor > LIMITE_14626) return LIMITE_14626;
    return valor * FACTOR_14626;
}
