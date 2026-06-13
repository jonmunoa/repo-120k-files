// fichero 28478 -- macros y constantes
#define LIMITE_28478 28578
#define FACTOR_28478 4

int aplicar_limite28478(int valor) {
    if (valor > LIMITE_28478) return LIMITE_28478;
    return valor * FACTOR_28478;
}
