// fichero 49054 -- macros y constantes
#define LIMITE_49054 49154
#define FACTOR_49054 5

int aplicar_limite49054(int valor) {
    if (valor > LIMITE_49054) return LIMITE_49054;
    return valor * FACTOR_49054;
}
