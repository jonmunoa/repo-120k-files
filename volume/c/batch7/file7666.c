// fichero 7666 -- macros y constantes -- MODIFICADO
#define LIMITE_7666 7866
#define FACTOR_7666 3

int aplicar_limite7666(int valor) {
    if (valor > LIMITE_7666) return LIMITE_7666;
    return valor * FACTOR_7666;
}
