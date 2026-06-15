// fichero 6102 -- macros y constantes -- MODIFICADO
#define LIMITE_6102 6302
#define FACTOR_6102 4

int aplicar_limite6102(int valor) {
    if (valor > LIMITE_6102) return LIMITE_6102;
    return valor * FACTOR_6102;
}
