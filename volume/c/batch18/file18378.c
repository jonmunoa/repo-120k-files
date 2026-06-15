// fichero 18378 -- macros y constantes -- MODIFICADO
#define LIMITE_18378 18578
#define FACTOR_18378 5

int aplicar_limite18378(int valor) {
    if (valor > LIMITE_18378) return LIMITE_18378;
    return valor * FACTOR_18378;
}
