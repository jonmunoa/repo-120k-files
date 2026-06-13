// fichero 41794 -- macros y constantes
#define LIMITE_41794 41894
#define FACTOR_41794 5

int aplicar_limite41794(int valor) {
    if (valor > LIMITE_41794) return LIMITE_41794;
    return valor * FACTOR_41794;
}
