// fichero 44054 -- macros y constantes
#define LIMITE_44054 44154
#define FACTOR_44054 5

int aplicar_limite44054(int valor) {
    if (valor > LIMITE_44054) return LIMITE_44054;
    return valor * FACTOR_44054;
}
