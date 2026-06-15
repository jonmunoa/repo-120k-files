// fichero 45282 -- macros y constantes -- MODIFICADO
#define LIMITE_45282 45482
#define FACTOR_45282 4

int aplicar_limite45282(int valor) {
    if (valor > LIMITE_45282) return LIMITE_45282;
    return valor * FACTOR_45282;
}
