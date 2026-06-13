// fichero 44658 -- macros y constantes
#define LIMITE_44658 44758
#define FACTOR_44658 4

int aplicar_limite44658(int valor) {
    if (valor > LIMITE_44658) return LIMITE_44658;
    return valor * FACTOR_44658;
}
