// fichero 44106 -- macros y constantes
#define LIMITE_44106 44206
#define FACTOR_44106 2

int aplicar_limite44106(int valor) {
    if (valor > LIMITE_44106) return LIMITE_44106;
    return valor * FACTOR_44106;
}
