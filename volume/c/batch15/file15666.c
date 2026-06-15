// fichero 15666 -- macros y constantes -- MODIFICADO
#define LIMITE_15666 15866
#define FACTOR_15666 3

int aplicar_limite15666(int valor) {
    if (valor > LIMITE_15666) return LIMITE_15666;
    return valor * FACTOR_15666;
}
