// fichero 12026 -- macros y constantes -- MODIFICADO
#define LIMITE_12026 12226
#define FACTOR_12026 3

int aplicar_limite12026(int valor) {
    if (valor > LIMITE_12026) return LIMITE_12026;
    return valor * FACTOR_12026;
}
