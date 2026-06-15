// fichero 10970 -- macros y constantes -- MODIFICADO
#define LIMITE_10970 11170
#define FACTOR_10970 2

int aplicar_limite10970(int valor) {
    if (valor > LIMITE_10970) return LIMITE_10970;
    return valor * FACTOR_10970;
}
