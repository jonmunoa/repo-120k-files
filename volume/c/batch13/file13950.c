// fichero 13950 -- macros y constantes
#define LIMITE_13950 14050
#define FACTOR_13950 1

int aplicar_limite13950(int valor) {
    if (valor > LIMITE_13950) return LIMITE_13950;
    return valor * FACTOR_13950;
}
