// fichero 30210 -- macros y constantes -- MODIFICADO
#define LIMITE_30210 30410
#define FACTOR_30210 2

int aplicar_limite30210(int valor) {
    if (valor > LIMITE_30210) return LIMITE_30210;
    return valor * FACTOR_30210;
}
