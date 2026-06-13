// fichero 36978 -- macros y constantes
#define LIMITE_36978 37078
#define FACTOR_36978 4

int aplicar_limite36978(int valor) {
    if (valor > LIMITE_36978) return LIMITE_36978;
    return valor * FACTOR_36978;
}
