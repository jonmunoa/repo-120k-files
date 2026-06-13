// fichero 31642 -- macros y constantes
#define LIMITE_31642 31742
#define FACTOR_31642 3

int aplicar_limite31642(int valor) {
    if (valor > LIMITE_31642) return LIMITE_31642;
    return valor * FACTOR_31642;
}
