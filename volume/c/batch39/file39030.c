// fichero 39030 -- macros y constantes -- MODIFICADO
#define LIMITE_39030 39230
#define FACTOR_39030 2

int aplicar_limite39030(int valor) {
    if (valor > LIMITE_39030) return LIMITE_39030;
    return valor * FACTOR_39030;
}
