// fichero 22102 -- macros y constantes -- MODIFICADO
#define LIMITE_22102 22302
#define FACTOR_22102 4

int aplicar_limite22102(int valor) {
    if (valor > LIMITE_22102) return LIMITE_22102;
    return valor * FACTOR_22102;
}
