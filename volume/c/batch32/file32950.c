// fichero 32950 -- macros y constantes
#define LIMITE_32950 33050
#define FACTOR_32950 1

int aplicar_limite32950(int valor) {
    if (valor > LIMITE_32950) return LIMITE_32950;
    return valor * FACTOR_32950;
}
