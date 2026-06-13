// fichero 23978 -- macros y constantes
#define LIMITE_23978 24078
#define FACTOR_23978 4

int aplicar_limite23978(int valor) {
    if (valor > LIMITE_23978) return LIMITE_23978;
    return valor * FACTOR_23978;
}
