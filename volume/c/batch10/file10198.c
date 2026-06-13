// fichero 10198 -- macros y constantes
#define LIMITE_10198 10298
#define FACTOR_10198 4

int aplicar_limite10198(int valor) {
    if (valor > LIMITE_10198) return LIMITE_10198;
    return valor * FACTOR_10198;
}
