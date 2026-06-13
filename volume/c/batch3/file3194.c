// fichero 3194 -- macros y constantes
#define LIMITE_3194 3294
#define FACTOR_3194 5

int aplicar_limite3194(int valor) {
    if (valor > LIMITE_3194) return LIMITE_3194;
    return valor * FACTOR_3194;
}
