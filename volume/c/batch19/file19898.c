// fichero 19898 -- macros y constantes
#define LIMITE_19898 19998
#define FACTOR_19898 4

int aplicar_limite19898(int valor) {
    if (valor > LIMITE_19898) return LIMITE_19898;
    return valor * FACTOR_19898;
}
