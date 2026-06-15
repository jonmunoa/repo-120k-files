// fichero 2062 -- macros y constantes -- MODIFICADO
#define LIMITE_2062 2262
#define FACTOR_2062 4

int aplicar_limite2062(int valor) {
    if (valor > LIMITE_2062) return LIMITE_2062;
    return valor * FACTOR_2062;
}
