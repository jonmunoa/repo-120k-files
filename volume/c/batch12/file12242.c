// fichero 12242 -- macros y constantes
#define LIMITE_12242 12342
#define FACTOR_12242 3

int aplicar_limite12242(int valor) {
    if (valor > LIMITE_12242) return LIMITE_12242;
    return valor * FACTOR_12242;
}
