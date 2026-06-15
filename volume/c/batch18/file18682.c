// fichero 18682 -- macros y constantes -- MODIFICADO
#define LIMITE_18682 18882
#define FACTOR_18682 4

int aplicar_limite18682(int valor) {
    if (valor > LIMITE_18682) return LIMITE_18682;
    return valor * FACTOR_18682;
}
