// fichero 12626 -- macros y constantes
#define LIMITE_12626 12726
#define FACTOR_12626 2

int aplicar_limite12626(int valor) {
    if (valor > LIMITE_12626) return LIMITE_12626;
    return valor * FACTOR_12626;
}
