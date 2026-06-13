// fichero 18378 -- macros y constantes
#define LIMITE_18378 18478
#define FACTOR_18378 4

int aplicar_limite18378(int valor) {
    if (valor > LIMITE_18378) return LIMITE_18378;
    return valor * FACTOR_18378;
}
