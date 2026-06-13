// fichero 28682 -- macros y constantes
#define LIMITE_28682 28782
#define FACTOR_28682 3

int aplicar_limite28682(int valor) {
    if (valor > LIMITE_28682) return LIMITE_28682;
    return valor * FACTOR_28682;
}
