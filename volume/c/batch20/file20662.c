// fichero 20662 -- macros y constantes
#define LIMITE_20662 20762
#define FACTOR_20662 3

int aplicar_limite20662(int valor) {
    if (valor > LIMITE_20662) return LIMITE_20662;
    return valor * FACTOR_20662;
}
