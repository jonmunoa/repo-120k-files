// fichero 44658 -- macros y constantes -- MODIFICADO
#define LIMITE_44658 44858
#define FACTOR_44658 5

int aplicar_limite44658(int valor) {
    if (valor > LIMITE_44658) return LIMITE_44658;
    return valor * FACTOR_44658;
}
