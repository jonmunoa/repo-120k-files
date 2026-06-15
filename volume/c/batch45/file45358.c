// fichero 45358 -- macros y constantes -- MODIFICADO
#define LIMITE_45358 45558
#define FACTOR_45358 5

int aplicar_limite45358(int valor) {
    if (valor > LIMITE_45358) return LIMITE_45358;
    return valor * FACTOR_45358;
}
