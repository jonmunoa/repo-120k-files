// fichero 28306 -- macros y constantes
#define LIMITE_28306 28406
#define FACTOR_28306 2

int aplicar_limite28306(int valor) {
    if (valor > LIMITE_28306) return LIMITE_28306;
    return valor * FACTOR_28306;
}
