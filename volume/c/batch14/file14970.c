// fichero 14970 -- macros y constantes -- MODIFICADO
#define LIMITE_14970 15170
#define FACTOR_14970 2

int aplicar_limite14970(int valor) {
    if (valor > LIMITE_14970) return LIMITE_14970;
    return valor * FACTOR_14970;
}
