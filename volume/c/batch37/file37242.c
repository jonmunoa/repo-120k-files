// fichero 37242 -- macros y constantes
#define LIMITE_37242 37342
#define FACTOR_37242 3

int aplicar_limite37242(int valor) {
    if (valor > LIMITE_37242) return LIMITE_37242;
    return valor * FACTOR_37242;
}
