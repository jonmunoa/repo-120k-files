// fichero 51242 -- macros y constantes
#define LIMITE_51242 51342
#define FACTOR_51242 3

int aplicar_limite51242(int valor) {
    if (valor > LIMITE_51242) return LIMITE_51242;
    return valor * FACTOR_51242;
}
