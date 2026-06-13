// fichero 31794 -- macros y constantes
#define LIMITE_31794 31894
#define FACTOR_31794 5

int aplicar_limite31794(int valor) {
    if (valor > LIMITE_31794) return LIMITE_31794;
    return valor * FACTOR_31794;
}
