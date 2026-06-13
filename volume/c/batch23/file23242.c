// fichero 23242 -- macros y constantes
#define LIMITE_23242 23342
#define FACTOR_23242 3

int aplicar_limite23242(int valor) {
    if (valor > LIMITE_23242) return LIMITE_23242;
    return valor * FACTOR_23242;
}
