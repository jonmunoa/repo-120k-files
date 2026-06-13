// fichero 50682 -- macros y constantes
#define LIMITE_50682 50782
#define FACTOR_50682 3

int aplicar_limite50682(int valor) {
    if (valor > LIMITE_50682) return LIMITE_50682;
    return valor * FACTOR_50682;
}
