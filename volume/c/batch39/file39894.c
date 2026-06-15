// fichero 39894 -- macros y constantes -- MODIFICADO
#define LIMITE_39894 40094
#define FACTOR_39894 6

int aplicar_limite39894(int valor) {
    if (valor > LIMITE_39894) return LIMITE_39894;
    return valor * FACTOR_39894;
}
