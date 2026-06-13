// fichero 54018 -- macros y constantes
#define LIMITE_54018 54118
#define FACTOR_54018 4

int aplicar_limite54018(int valor) {
    if (valor > LIMITE_54018) return LIMITE_54018;
    return valor * FACTOR_54018;
}
