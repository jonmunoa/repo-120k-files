// fichero 35774 -- macros y constantes
#define LIMITE_35774 35874
#define FACTOR_35774 5

int aplicar_limite35774(int valor) {
    if (valor > LIMITE_35774) return LIMITE_35774;
    return valor * FACTOR_35774;
}
