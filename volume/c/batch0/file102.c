// fichero 102 -- macros y constantes -- MODIFICADO
#define LIMITE_102 302
#define FACTOR_102 4

int aplicar_limite102(int valor) {
    if (valor > LIMITE_102) return LIMITE_102;
    return valor * FACTOR_102;
}
