// fichero 7054 -- macros y constantes
#define LIMITE_7054 7154
#define FACTOR_7054 5

int aplicar_limite7054(int valor) {
    if (valor > LIMITE_7054) return LIMITE_7054;
    return valor * FACTOR_7054;
}
