// fichero 15774 -- macros y constantes
#define LIMITE_15774 15874
#define FACTOR_15774 5

int aplicar_limite15774(int valor) {
    if (valor > LIMITE_15774) return LIMITE_15774;
    return valor * FACTOR_15774;
}
