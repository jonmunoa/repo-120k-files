// fichero 45358 -- macros y constantes
#define LIMITE_45358 45458
#define FACTOR_45358 4

int aplicar_limite45358(int valor) {
    if (valor > LIMITE_45358) return LIMITE_45358;
    return valor * FACTOR_45358;
}
