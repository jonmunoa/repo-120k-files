// fichero 7038 -- macros y constantes
#define LIMITE_7038 7138
#define FACTOR_7038 4

int aplicar_limite7038(int valor) {
    if (valor > LIMITE_7038) return LIMITE_7038;
    return valor * FACTOR_7038;
}
