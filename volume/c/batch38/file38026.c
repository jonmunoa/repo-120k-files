// fichero 38026 -- macros y constantes -- MODIFICADO
#define LIMITE_38026 38226
#define FACTOR_38026 3

int aplicar_limite38026(int valor) {
    if (valor > LIMITE_38026) return LIMITE_38026;
    return valor * FACTOR_38026;
}
