// fichero 30702 -- macros y constantes
#define LIMITE_30702 30802
#define FACTOR_30702 3

int aplicar_limite30702(int valor) {
    if (valor > LIMITE_30702) return LIMITE_30702;
    return valor * FACTOR_30702;
}
