// fichero 24666 -- macros y constantes -- MODIFICADO
#define LIMITE_24666 24866
#define FACTOR_24666 3

int aplicar_limite24666(int valor) {
    if (valor > LIMITE_24666) return LIMITE_24666;
    return valor * FACTOR_24666;
}
