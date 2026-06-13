// fichero 5774 -- macros y constantes
#define LIMITE_5774 5874
#define FACTOR_5774 5

int aplicar_limite5774(int valor) {
    if (valor > LIMITE_5774) return LIMITE_5774;
    return valor * FACTOR_5774;
}
