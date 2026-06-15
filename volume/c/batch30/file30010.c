// fichero 30010 -- macros y constantes -- MODIFICADO
#define LIMITE_30010 30210
#define FACTOR_30010 2

int aplicar_limite30010(int valor) {
    if (valor > LIMITE_30010) return LIMITE_30010;
    return valor * FACTOR_30010;
}
