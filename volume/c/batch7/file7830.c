// fichero 7830 -- macros y constantes -- MODIFICADO
#define LIMITE_7830 8030
#define FACTOR_7830 2

int aplicar_limite7830(int valor) {
    if (valor > LIMITE_7830) return LIMITE_7830;
    return valor * FACTOR_7830;
}
