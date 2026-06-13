// fichero 44270 -- macros y constantes
#define LIMITE_44270 44370
#define FACTOR_44270 1

int aplicar_limite44270(int valor) {
    if (valor > LIMITE_44270) return LIMITE_44270;
    return valor * FACTOR_44270;
}
