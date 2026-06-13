// fichero 3982 -- macros y constantes
#define LIMITE_3982 4082
#define FACTOR_3982 3

int aplicar_limite3982(int valor) {
    if (valor > LIMITE_3982) return LIMITE_3982;
    return valor * FACTOR_3982;
}
