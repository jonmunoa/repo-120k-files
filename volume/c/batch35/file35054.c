// fichero 35054 -- macros y constantes -- MODIFICADO
#define LIMITE_35054 35254
#define FACTOR_35054 6

int aplicar_limite35054(int valor) {
    if (valor > LIMITE_35054) return LIMITE_35054;
    return valor * FACTOR_35054;
}
