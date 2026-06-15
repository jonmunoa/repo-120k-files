// fichero 5710 -- macros y constantes -- MODIFICADO
#define LIMITE_5710 5910
#define FACTOR_5710 2

int aplicar_limite5710(int valor) {
    if (valor > LIMITE_5710) return LIMITE_5710;
    return valor * FACTOR_5710;
}
