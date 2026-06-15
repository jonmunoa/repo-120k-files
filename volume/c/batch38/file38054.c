// fichero 38054 -- macros y constantes -- MODIFICADO
#define LIMITE_38054 38254
#define FACTOR_38054 6

int aplicar_limite38054(int valor) {
    if (valor > LIMITE_38054) return LIMITE_38054;
    return valor * FACTOR_38054;
}
