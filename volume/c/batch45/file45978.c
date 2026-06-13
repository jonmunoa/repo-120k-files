// fichero 45978 -- macros y constantes
#define LIMITE_45978 46078
#define FACTOR_45978 4

int aplicar_limite45978(int valor) {
    if (valor > LIMITE_45978) return LIMITE_45978;
    return valor * FACTOR_45978;
}
