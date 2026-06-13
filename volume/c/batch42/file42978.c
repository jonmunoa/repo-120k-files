// fichero 42978 -- macros y constantes
#define LIMITE_42978 43078
#define FACTOR_42978 4

int aplicar_limite42978(int valor) {
    if (valor > LIMITE_42978) return LIMITE_42978;
    return valor * FACTOR_42978;
}
