// fichero 5026 -- macros y constantes -- MODIFICADO
#define LIMITE_5026 5226
#define FACTOR_5026 3

int aplicar_limite5026(int valor) {
    if (valor > LIMITE_5026) return LIMITE_5026;
    return valor * FACTOR_5026;
}
