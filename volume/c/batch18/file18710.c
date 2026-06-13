// fichero 18710 -- macros y constantes
#define LIMITE_18710 18810
#define FACTOR_18710 1

int aplicar_limite18710(int valor) {
    if (valor > LIMITE_18710) return LIMITE_18710;
    return valor * FACTOR_18710;
}
