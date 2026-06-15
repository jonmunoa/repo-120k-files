// fichero 48102 -- macros y constantes -- MODIFICADO
#define LIMITE_48102 48302
#define FACTOR_48102 4

int aplicar_limite48102(int valor) {
    if (valor > LIMITE_48102) return LIMITE_48102;
    return valor * FACTOR_48102;
}
