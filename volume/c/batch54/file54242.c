// fichero 54242 -- macros y constantes
#define LIMITE_54242 54342
#define FACTOR_54242 3

int aplicar_limite54242(int valor) {
    if (valor > LIMITE_54242) return LIMITE_54242;
    return valor * FACTOR_54242;
}
