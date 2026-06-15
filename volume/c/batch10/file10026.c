// fichero 10026 -- macros y constantes -- MODIFICADO
#define LIMITE_10026 10226
#define FACTOR_10026 3

int aplicar_limite10026(int valor) {
    if (valor > LIMITE_10026) return LIMITE_10026;
    return valor * FACTOR_10026;
}
