// fichero 7666 -- macros y constantes
#define LIMITE_7666 7766
#define FACTOR_7666 2

int aplicar_limite7666(int valor) {
    if (valor > LIMITE_7666) return LIMITE_7666;
    return valor * FACTOR_7666;
}
