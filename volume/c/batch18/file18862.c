// fichero 18862 -- macros y constantes -- MODIFICADO
#define LIMITE_18862 19062
#define FACTOR_18862 4

int aplicar_limite18862(int valor) {
    if (valor > LIMITE_18862) return LIMITE_18862;
    return valor * FACTOR_18862;
}
