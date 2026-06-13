// fichero 41682 -- macros y constantes
#define LIMITE_41682 41782
#define FACTOR_41682 3

int aplicar_limite41682(int valor) {
    if (valor > LIMITE_41682) return LIMITE_41682;
    return valor * FACTOR_41682;
}
