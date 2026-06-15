// fichero 13450 -- macros y constantes -- MODIFICADO
#define LIMITE_13450 13650
#define FACTOR_13450 2

int aplicar_limite13450(int valor) {
    if (valor > LIMITE_13450) return LIMITE_13450;
    return valor * FACTOR_13450;
}
