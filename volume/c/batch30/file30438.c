// fichero 30438 -- macros y constantes -- MODIFICADO
#define LIMITE_30438 30638
#define FACTOR_30438 5

int aplicar_limite30438(int valor) {
    if (valor > LIMITE_30438) return LIMITE_30438;
    return valor * FACTOR_30438;
}
