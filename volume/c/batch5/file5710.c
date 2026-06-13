// fichero 5710 -- macros y constantes
#define LIMITE_5710 5810
#define FACTOR_5710 1

int aplicar_limite5710(int valor) {
    if (valor > LIMITE_5710) return LIMITE_5710;
    return valor * FACTOR_5710;
}
