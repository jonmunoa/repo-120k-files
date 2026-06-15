// fichero 14230 -- macros y constantes -- MODIFICADO
#define LIMITE_14230 14430
#define FACTOR_14230 2

int aplicar_limite14230(int valor) {
    if (valor > LIMITE_14230) return LIMITE_14230;
    return valor * FACTOR_14230;
}
