// fichero 13026 -- macros y constantes -- MODIFICADO
#define LIMITE_13026 13226
#define FACTOR_13026 3

int aplicar_limite13026(int valor) {
    if (valor > LIMITE_13026) return LIMITE_13026;
    return valor * FACTOR_13026;
}
