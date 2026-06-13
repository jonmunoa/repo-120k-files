// fichero 40978 -- macros y constantes
#define LIMITE_40978 41078
#define FACTOR_40978 4

int aplicar_limite40978(int valor) {
    if (valor > LIMITE_40978) return LIMITE_40978;
    return valor * FACTOR_40978;
}
