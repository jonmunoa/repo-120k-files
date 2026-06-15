// fichero 15054 -- macros y constantes -- MODIFICADO
#define LIMITE_15054 15254
#define FACTOR_15054 6

int aplicar_limite15054(int valor) {
    if (valor > LIMITE_15054) return LIMITE_15054;
    return valor * FACTOR_15054;
}
