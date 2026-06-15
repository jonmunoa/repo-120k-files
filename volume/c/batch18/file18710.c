// fichero 18710 -- macros y constantes -- MODIFICADO
#define LIMITE_18710 18910
#define FACTOR_18710 2

int aplicar_limite18710(int valor) {
    if (valor > LIMITE_18710) return LIMITE_18710;
    return valor * FACTOR_18710;
}
