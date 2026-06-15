// fichero 18602 -- macros y constantes -- MODIFICADO
#define LIMITE_18602 18802
#define FACTOR_18602 4

int aplicar_limite18602(int valor) {
    if (valor > LIMITE_18602) return LIMITE_18602;
    return valor * FACTOR_18602;
}
