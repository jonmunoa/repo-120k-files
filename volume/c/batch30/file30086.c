// fichero 30086 -- macros y constantes -- MODIFICADO
#define LIMITE_30086 30286
#define FACTOR_30086 3

int aplicar_limite30086(int valor) {
    if (valor > LIMITE_30086) return LIMITE_30086;
    return valor * FACTOR_30086;
}
