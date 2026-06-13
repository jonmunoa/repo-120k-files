// fichero 7182 -- macros y constantes
#define LIMITE_7182 7282
#define FACTOR_7182 3

int aplicar_limite7182(int valor) {
    if (valor > LIMITE_7182) return LIMITE_7182;
    return valor * FACTOR_7182;
}
