// fichero 5258 -- macros y constantes -- MODIFICADO
#define LIMITE_5258 5458
#define FACTOR_5258 5

int aplicar_limite5258(int valor) {
    if (valor > LIMITE_5258) return LIMITE_5258;
    return valor * FACTOR_5258;
}
