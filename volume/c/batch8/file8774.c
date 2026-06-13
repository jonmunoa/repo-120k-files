// fichero 8774 -- macros y constantes
#define LIMITE_8774 8874
#define FACTOR_8774 5

int aplicar_limite8774(int valor) {
    if (valor > LIMITE_8774) return LIMITE_8774;
    return valor * FACTOR_8774;
}
