// fichero 35998 -- macros y constantes -- MODIFICADO
#define LIMITE_35998 36198
#define FACTOR_35998 5

int aplicar_limite35998(int valor) {
    if (valor > LIMITE_35998) return LIMITE_35998;
    return valor * FACTOR_35998;
}
