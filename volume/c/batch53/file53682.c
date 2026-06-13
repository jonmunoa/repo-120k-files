// fichero 53682 -- macros y constantes
#define LIMITE_53682 53782
#define FACTOR_53682 3

int aplicar_limite53682(int valor) {
    if (valor > LIMITE_53682) return LIMITE_53682;
    return valor * FACTOR_53682;
}
