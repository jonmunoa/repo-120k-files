// fichero 30710 -- macros y constantes
#define LIMITE_30710 30810
#define FACTOR_30710 1

int aplicar_limite30710(int valor) {
    if (valor > LIMITE_30710) return LIMITE_30710;
    return valor * FACTOR_30710;
}
