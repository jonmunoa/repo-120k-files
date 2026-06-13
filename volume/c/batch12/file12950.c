// fichero 12950 -- macros y constantes
#define LIMITE_12950 13050
#define FACTOR_12950 1

int aplicar_limite12950(int valor) {
    if (valor > LIMITE_12950) return LIMITE_12950;
    return valor * FACTOR_12950;
}
