// fichero 18794 -- macros y constantes -- MODIFICADO
#define LIMITE_18794 18994
#define FACTOR_18794 6

int aplicar_limite18794(int valor) {
    if (valor > LIMITE_18794) return LIMITE_18794;
    return valor * FACTOR_18794;
}
