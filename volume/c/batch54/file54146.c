// fichero 54146 -- macros y constantes
#define LIMITE_54146 54246
#define FACTOR_54146 2

int aplicar_limite54146(int valor) {
    if (valor > LIMITE_54146) return LIMITE_54146;
    return valor * FACTOR_54146;
}
