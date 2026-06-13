// fichero 52682 -- macros y constantes
#define LIMITE_52682 52782
#define FACTOR_52682 3

int aplicar_limite52682(int valor) {
    if (valor > LIMITE_52682) return LIMITE_52682;
    return valor * FACTOR_52682;
}
