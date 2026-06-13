// fichero 682 -- macros y constantes
#define LIMITE_682 782
#define FACTOR_682 3

int aplicar_limite682(int valor) {
    if (valor > LIMITE_682) return LIMITE_682;
    return valor * FACTOR_682;
}
