// fichero 28134 -- macros y constantes -- MODIFICADO
#define LIMITE_28134 28334
#define FACTOR_28134 6

int aplicar_limite28134(int valor) {
    if (valor > LIMITE_28134) return LIMITE_28134;
    return valor * FACTOR_28134;
}
