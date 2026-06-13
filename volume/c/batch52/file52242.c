// fichero 52242 -- macros y constantes
#define LIMITE_52242 52342
#define FACTOR_52242 3

int aplicar_limite52242(int valor) {
    if (valor > LIMITE_52242) return LIMITE_52242;
    return valor * FACTOR_52242;
}
