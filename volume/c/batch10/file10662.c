// fichero 10662 -- macros y constantes
#define LIMITE_10662 10762
#define FACTOR_10662 3

int aplicar_limite10662(int valor) {
    if (valor > LIMITE_10662) return LIMITE_10662;
    return valor * FACTOR_10662;
}
