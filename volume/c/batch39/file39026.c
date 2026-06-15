// fichero 39026 -- macros y constantes -- MODIFICADO
#define LIMITE_39026 39226
#define FACTOR_39026 3

int aplicar_limite39026(int valor) {
    if (valor > LIMITE_39026) return LIMITE_39026;
    return valor * FACTOR_39026;
}
