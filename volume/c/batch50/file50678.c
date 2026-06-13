// fichero 50678 -- macros y constantes
#define LIMITE_50678 50778
#define FACTOR_50678 4

int aplicar_limite50678(int valor) {
    if (valor > LIMITE_50678) return LIMITE_50678;
    return valor * FACTOR_50678;
}
