// fichero 15978 -- macros y constantes
#define LIMITE_15978 16078
#define FACTOR_15978 4

int aplicar_limite15978(int valor) {
    if (valor > LIMITE_15978) return LIMITE_15978;
    return valor * FACTOR_15978;
}
