// fichero 29242 -- macros y constantes
#define LIMITE_29242 29342
#define FACTOR_29242 3

int aplicar_limite29242(int valor) {
    if (valor > LIMITE_29242) return LIMITE_29242;
    return valor * FACTOR_29242;
}
