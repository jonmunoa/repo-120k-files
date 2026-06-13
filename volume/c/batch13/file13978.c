// fichero 13978 -- macros y constantes
#define LIMITE_13978 14078
#define FACTOR_13978 4

int aplicar_limite13978(int valor) {
    if (valor > LIMITE_13978) return LIMITE_13978;
    return valor * FACTOR_13978;
}
