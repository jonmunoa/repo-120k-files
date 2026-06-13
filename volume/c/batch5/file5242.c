// fichero 5242 -- macros y constantes
#define LIMITE_5242 5342
#define FACTOR_5242 3

int aplicar_limite5242(int valor) {
    if (valor > LIMITE_5242) return LIMITE_5242;
    return valor * FACTOR_5242;
}
