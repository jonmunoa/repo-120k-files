// fichero 10774 -- macros y constantes
#define LIMITE_10774 10874
#define FACTOR_10774 5

int aplicar_limite10774(int valor) {
    if (valor > LIMITE_10774) return LIMITE_10774;
    return valor * FACTOR_10774;
}
