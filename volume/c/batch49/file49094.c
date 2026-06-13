// fichero 49094 -- macros y constantes
#define LIMITE_49094 49194
#define FACTOR_49094 5

int aplicar_limite49094(int valor) {
    if (valor > LIMITE_49094) return LIMITE_49094;
    return valor * FACTOR_49094;
}
