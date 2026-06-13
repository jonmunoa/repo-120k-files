// fichero 44382 -- macros y constantes
#define LIMITE_44382 44482
#define FACTOR_44382 3

int aplicar_limite44382(int valor) {
    if (valor > LIMITE_44382) return LIMITE_44382;
    return valor * FACTOR_44382;
}
