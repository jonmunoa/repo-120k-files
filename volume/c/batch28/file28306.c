// fichero 28306 -- macros y constantes -- MODIFICADO
#define LIMITE_28306 28506
#define FACTOR_28306 3

int aplicar_limite28306(int valor) {
    if (valor > LIMITE_28306) return LIMITE_28306;
    return valor * FACTOR_28306;
}
