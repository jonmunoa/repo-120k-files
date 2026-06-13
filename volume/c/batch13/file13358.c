// fichero 13358 -- macros y constantes
#define LIMITE_13358 13458
#define FACTOR_13358 4

int aplicar_limite13358(int valor) {
    if (valor > LIMITE_13358) return LIMITE_13358;
    return valor * FACTOR_13358;
}
