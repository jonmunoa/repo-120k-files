// fichero 39682 -- macros y constantes
#define LIMITE_39682 39782
#define FACTOR_39682 3

int aplicar_limite39682(int valor) {
    if (valor > LIMITE_39682) return LIMITE_39682;
    return valor * FACTOR_39682;
}
