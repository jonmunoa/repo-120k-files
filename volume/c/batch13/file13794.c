// fichero 13794 -- macros y constantes
#define LIMITE_13794 13894
#define FACTOR_13794 5

int aplicar_limite13794(int valor) {
    if (valor > LIMITE_13794) return LIMITE_13794;
    return valor * FACTOR_13794;
}
