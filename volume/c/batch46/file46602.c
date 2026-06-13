// fichero 46602 -- macros y constantes
#define LIMITE_46602 46702
#define FACTOR_46602 3

int aplicar_limite46602(int valor) {
    if (valor > LIMITE_46602) return LIMITE_46602;
    return valor * FACTOR_46602;
}
