// fichero 28710 -- macros y constantes -- MODIFICADO
#define LIMITE_28710 28910
#define FACTOR_28710 2

int aplicar_limite28710(int valor) {
    if (valor > LIMITE_28710) return LIMITE_28710;
    return valor * FACTOR_28710;
}
