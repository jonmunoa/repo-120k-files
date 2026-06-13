// fichero 10970 -- macros y constantes
#define LIMITE_10970 11070
#define FACTOR_10970 1

int aplicar_limite10970(int valor) {
    if (valor > LIMITE_10970) return LIMITE_10970;
    return valor * FACTOR_10970;
}
