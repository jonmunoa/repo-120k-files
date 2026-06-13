// fichero 3150 -- macros y constantes
#define LIMITE_3150 3250
#define FACTOR_3150 1

int aplicar_limite3150(int valor) {
    if (valor > LIMITE_3150) return LIMITE_3150;
    return valor * FACTOR_3150;
}
