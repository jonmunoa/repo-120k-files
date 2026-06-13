// fichero 18906 -- macros y constantes
#define LIMITE_18906 19006
#define FACTOR_18906 2

int aplicar_limite18906(int valor) {
    if (valor > LIMITE_18906) return LIMITE_18906;
    return valor * FACTOR_18906;
}
