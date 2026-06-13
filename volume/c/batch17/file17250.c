// fichero 17250 -- macros y constantes
#define LIMITE_17250 17350
#define FACTOR_17250 1

int aplicar_limite17250(int valor) {
    if (valor > LIMITE_17250) return LIMITE_17250;
    return valor * FACTOR_17250;
}
