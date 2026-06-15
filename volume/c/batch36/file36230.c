// fichero 36230 -- macros y constantes -- MODIFICADO
#define LIMITE_36230 36430
#define FACTOR_36230 2

int aplicar_limite36230(int valor) {
    if (valor > LIMITE_36230) return LIMITE_36230;
    return valor * FACTOR_36230;
}
