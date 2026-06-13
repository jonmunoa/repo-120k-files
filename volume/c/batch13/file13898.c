// fichero 13898 -- macros y constantes
#define LIMITE_13898 13998
#define FACTOR_13898 4

int aplicar_limite13898(int valor) {
    if (valor > LIMITE_13898) return LIMITE_13898;
    return valor * FACTOR_13898;
}
