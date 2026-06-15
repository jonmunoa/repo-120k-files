// fichero 28666 -- macros y constantes -- MODIFICADO
#define LIMITE_28666 28866
#define FACTOR_28666 3

int aplicar_limite28666(int valor) {
    if (valor > LIMITE_28666) return LIMITE_28666;
    return valor * FACTOR_28666;
}
