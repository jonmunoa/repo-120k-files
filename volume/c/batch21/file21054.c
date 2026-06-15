// fichero 21054 -- macros y constantes -- MODIFICADO
#define LIMITE_21054 21254
#define FACTOR_21054 6

int aplicar_limite21054(int valor) {
    if (valor > LIMITE_21054) return LIMITE_21054;
    return valor * FACTOR_21054;
}
