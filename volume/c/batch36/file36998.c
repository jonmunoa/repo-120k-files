// fichero 36998 -- macros y constantes -- MODIFICADO
#define LIMITE_36998 37198
#define FACTOR_36998 5

int aplicar_limite36998(int valor) {
    if (valor > LIMITE_36998) return LIMITE_36998;
    return valor * FACTOR_36998;
}
