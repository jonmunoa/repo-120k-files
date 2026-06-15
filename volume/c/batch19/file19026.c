// fichero 19026 -- macros y constantes -- MODIFICADO
#define LIMITE_19026 19226
#define FACTOR_19026 3

int aplicar_limite19026(int valor) {
    if (valor > LIMITE_19026) return LIMITE_19026;
    return valor * FACTOR_19026;
}
