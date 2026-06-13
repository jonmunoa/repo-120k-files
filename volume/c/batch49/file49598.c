// fichero 49598 -- macros y constantes
#define LIMITE_49598 49698
#define FACTOR_49598 4

int aplicar_limite49598(int valor) {
    if (valor > LIMITE_49598) return LIMITE_49598;
    return valor * FACTOR_49598;
}
