// fichero 7970 -- macros y constantes -- MODIFICADO
#define LIMITE_7970 8170
#define FACTOR_7970 2

int aplicar_limite7970(int valor) {
    if (valor > LIMITE_7970) return LIMITE_7970;
    return valor * FACTOR_7970;
}
