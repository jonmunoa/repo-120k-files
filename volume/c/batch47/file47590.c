// fichero 47590 -- macros y constantes -- MODIFICADO
#define LIMITE_47590 47790
#define FACTOR_47590 2

int aplicar_limite47590(int valor) {
    if (valor > LIMITE_47590) return LIMITE_47590;
    return valor * FACTOR_47590;
}
