// fichero 38682 -- macros y constantes -- MODIFICADO
#define LIMITE_38682 38882
#define FACTOR_38682 4

int aplicar_limite38682(int valor) {
    if (valor > LIMITE_38682) return LIMITE_38682;
    return valor * FACTOR_38682;
}
