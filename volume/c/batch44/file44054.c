// fichero 44054 -- macros y constantes -- MODIFICADO
#define LIMITE_44054 44254
#define FACTOR_44054 6

int aplicar_limite44054(int valor) {
    if (valor > LIMITE_44054) return LIMITE_44054;
    return valor * FACTOR_44054;
}
