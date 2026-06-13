// fichero 10950 -- macros y constantes
#define LIMITE_10950 11050
#define FACTOR_10950 1

int aplicar_limite10950(int valor) {
    if (valor > LIMITE_10950) return LIMITE_10950;
    return valor * FACTOR_10950;
}
