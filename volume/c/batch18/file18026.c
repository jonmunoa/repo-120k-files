// fichero 18026 -- macros y constantes -- MODIFICADO
#define LIMITE_18026 18226
#define FACTOR_18026 3

int aplicar_limite18026(int valor) {
    if (valor > LIMITE_18026) return LIMITE_18026;
    return valor * FACTOR_18026;
}
