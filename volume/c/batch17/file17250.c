// fichero 17250 -- macros y constantes -- MODIFICADO
#define LIMITE_17250 17450
#define FACTOR_17250 2

int aplicar_limite17250(int valor) {
    if (valor > LIMITE_17250) return LIMITE_17250;
    return valor * FACTOR_17250;
}
