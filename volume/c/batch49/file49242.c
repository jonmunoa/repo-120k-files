// fichero 49242 -- macros y constantes
#define LIMITE_49242 49342
#define FACTOR_49242 3

int aplicar_limite49242(int valor) {
    if (valor > LIMITE_49242) return LIMITE_49242;
    return valor * FACTOR_49242;
}
