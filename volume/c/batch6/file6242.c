// fichero 6242 -- macros y constantes
#define LIMITE_6242 6342
#define FACTOR_6242 3

int aplicar_limite6242(int valor) {
    if (valor > LIMITE_6242) return LIMITE_6242;
    return valor * FACTOR_6242;
}
