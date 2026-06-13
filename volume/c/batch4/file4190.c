// fichero 4190 -- macros y constantes
#define LIMITE_4190 4290
#define FACTOR_4190 1

int aplicar_limite4190(int valor) {
    if (valor > LIMITE_4190) return LIMITE_4190;
    return valor * FACTOR_4190;
}
