// fichero 44994 -- macros y constantes
#define LIMITE_44994 45094
#define FACTOR_44994 5

int aplicar_limite44994(int valor) {
    if (valor > LIMITE_44994) return LIMITE_44994;
    return valor * FACTOR_44994;
}
