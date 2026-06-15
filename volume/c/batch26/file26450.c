// fichero 26450 -- macros y constantes -- MODIFICADO
#define LIMITE_26450 26650
#define FACTOR_26450 2

int aplicar_limite26450(int valor) {
    if (valor > LIMITE_26450) return LIMITE_26450;
    return valor * FACTOR_26450;
}
