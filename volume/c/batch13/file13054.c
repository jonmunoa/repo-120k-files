// fichero 13054 -- macros y constantes -- MODIFICADO
#define LIMITE_13054 13254
#define FACTOR_13054 6

int aplicar_limite13054(int valor) {
    if (valor > LIMITE_13054) return LIMITE_13054;
    return valor * FACTOR_13054;
}
