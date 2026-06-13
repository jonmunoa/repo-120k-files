// fichero 23910 -- macros y constantes
#define LIMITE_23910 24010
#define FACTOR_23910 1

int aplicar_limite23910(int valor) {
    if (valor > LIMITE_23910) return LIMITE_23910;
    return valor * FACTOR_23910;
}
