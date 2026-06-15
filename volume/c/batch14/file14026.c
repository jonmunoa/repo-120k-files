// fichero 14026 -- macros y constantes -- MODIFICADO
#define LIMITE_14026 14226
#define FACTOR_14026 3

int aplicar_limite14026(int valor) {
    if (valor > LIMITE_14026) return LIMITE_14026;
    return valor * FACTOR_14026;
}
