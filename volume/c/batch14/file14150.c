// fichero 14150 -- macros y constantes
#define LIMITE_14150 14250
#define FACTOR_14150 1

int aplicar_limite14150(int valor) {
    if (valor > LIMITE_14150) return LIMITE_14150;
    return valor * FACTOR_14150;
}
