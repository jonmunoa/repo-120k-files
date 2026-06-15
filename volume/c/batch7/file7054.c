// fichero 7054 -- macros y constantes -- MODIFICADO
#define LIMITE_7054 7254
#define FACTOR_7054 6

int aplicar_limite7054(int valor) {
    if (valor > LIMITE_7054) return LIMITE_7054;
    return valor * FACTOR_7054;
}
